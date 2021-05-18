#include <stdio.h>
#include <stdlib.h>
 
 
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
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
        if (L[i] <= R[j]) 
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
void mergeSort(int arr[], int l, int r) 
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
} 
 
int main()
{
    int N,Q, *T,*S,qi,*qa,i;
    int time=0;
    int temp;
    scanf("%d",&N);
    scanf("%d",&Q);
    qa=(int *)malloc(sizeof(int)*Q);
    T=(int *)malloc(sizeof(int)*N);
    S=(int *)malloc(sizeof(int)*N);
    for(i=0;i<N;i++)
    {
        scanf("%d",T+i);
    }
    for(i=0;i<N;i++)
    {
        scanf("%d",S+i);
    }
    for(qi=0;qi<Q;qi++)
    {
        scanf("%d",qa+qi);
    }
    mergeSort(T,0,N-1);
    mergeSort(S,0,N-1);
    /* for(i=0;i<N;i++)
    {
        printf("%d",*(T+i));
    }*/
    //printf("%d",Q);
    for(qi=0;qi<Q;qi++)
    {
        temp=qa[qi];
        
        for(i=0;i<temp;i++)
        {
            time=time+T[N-i-1];
            
        }
        printf("%d\n",time);
        time=0;
    }
  return 0;
}