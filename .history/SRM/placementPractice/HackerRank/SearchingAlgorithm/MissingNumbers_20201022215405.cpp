// #include<bits/stdc++.h>
// #define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
// #define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
// #define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
// #define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
// #define inc_sort(v) sort(v.begin(),v.end());
// #define pb push_back
// #define endl '\n'
// using namespace std;
// #define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
// #define testcase() int t; cin >> t; while(t--)

// int main(){
//    EXECUTE_FASTER
//     int n,m;
//     cin >> n;
//     map<int,int> arr,brr;
//     for(int i = 0; i < n; i++){
//         int a;
//         cin >> a;
//         arr[a]++;
//     }
//     cin >> m;
//     for(int i = 0; i < m; i++){
//         int a;
//         cin >> a;
//         brr[a]++;
//     }
//     for(auto it = brr.begin(); it != brr.end(); it++){
//         if(abs(it->second - (arr[it->first])) > 0){
//             cout << it->first << " ";
//         }
//     }
//    return 0;
// }

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
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(struct node arr[], int l, int r)
{
	if (l < r)
	{
	
		int m = l+(r-l)/2;

		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);

		merge(arr, l, m, r);
	}
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
                if(a<min)
                    min=a;
                break;
            }
        }
    }
    printf("%ld",min);
	return 0;
}