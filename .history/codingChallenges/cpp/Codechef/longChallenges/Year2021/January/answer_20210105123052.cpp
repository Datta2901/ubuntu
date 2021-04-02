// #include <bits/stdc++.h>
// using namespace std;
// int findMin(int arr[], int n)
// {
// 	int sum = 0; 
// 	for (int i = 0; i < n; i++)
// 		sum += arr[i];
// 	bool dp[n+1][sum+1];
// 	for (int i = 0; i <= n; i++)
// 		dp[i][0] = true;
// 	for (int i = 1; i <= sum; i++)
// 		dp[0][i] = false;
// 	for (int i=1; i<=n; i++){
// 		for (int j=1; j<=sum; j++){
// 			dp[i][j] = dp[i-1][j];
// 			if (arr[i-1] <= j)
// 				dp[i][j] |= dp[i-1][j-arr[i-1]];
// 		}
// 	} 
// 	int diff = INT_MAX;
	
// 	for (int j=sum/2; j>=0; j--)
// 	{ 
// 		if (dp[n][j] == true)
// 		{
// 			diff = sum-2*j;
// 			break;
// 		}
// 	}
// 	return diff;
// }
// int main()
// {
// 	int arr[] = {3, 1, 1, 2, 2, 3};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	cout << "The minimum difference between 2 sets is " << findMin(arr, n) << endl;
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int countSubarrays(int arr[], int n, int k) { 
    int start = 0, end = 0, count = 0, sum = arr[0];

    while (start < n && end < n) { 

        if (sum <= k) { 
        end++; 

        if (end >= start) 
            count += end - start; 

        if (end < n) 
            sum += arr[end]; 
        } 

        else { 
            sum -= arr[start]; 
            start++; 
        } 
    } 

    return count; 
}

int main() {

int n,k;
cin >> n >> k;
int *array= new int[n];
for(int i=0;i<n;i++)
{
    cin >>array[i];
}
cout <<max(0,int(pow(2,n))-2*(countSubarrays(array, n, k)+1));
}
