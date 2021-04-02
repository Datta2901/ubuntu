/* C program for Merge Sort */
#include<stdlib.h>
#include<stdio.h>
struct node {
    long int p;
    int index;
};
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(struct node arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	struct node L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i].p <= R[j].p)
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(struct node arr[], int l, int r)
{
	if (l < r)
	{
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l+(r-l)/2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);

		merge(arr, l, m, r);
	}

int main()
{
	int n,i,j;
	scanf("%d", &n);
	struct node arr[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&arr[i].p);
        arr[i].index=i;
    }
	mergeSort(arr, 0, n - 1);
    long int min=999999999,a;
    for(i=n-1;i>0;i--){
        for(j=i-1;j>=0;j--) {
            if(arr[i].index<arr[j].index) {
                a=arr[i].p-arr[j].p;
                /*if(flag==0) {
                    min=a;
                    flag=1;
                }*/
                if(a<min)
                    min=a;
                break;
            }
        }
    }
    printf("%ld",min);
	return 0;
}