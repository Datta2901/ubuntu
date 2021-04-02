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

#include <stdio.h>

bool isSubsetSum(int set[], int n, int sum)
{
	bool subset[n + 1][sum + 1];
	for (int i = 0; i <= n; i++)
		subset[i][0] = true;

	for (int i = 1; i <= sum; i++)
		subset[0][i] = false;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (j < set[i - 1])
				subset[i][j] = subset[i - 1][j];
			if (j >= set[i - 1])
				subset[i][j] = subset[i - 1][j]
							|| subset[i - 1][j - set[i - 1]];
		}
	}

	/* // uncomment this code to print table
	for (int i = 0; i <= n; i++)
	{
	for (int j = 0; j <= sum; j++)
		printf ("%4d", subset[i][j]);
	printf("\n");
	}*/

	return subset[n][sum];
}

// Driver code
int main()
{
	int set[] = { 3, 34, 4, 12, 5, 2 };
	int sum = 9;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		printf("Found a subset with given sum");
	else
		printf("No subset with given sum");
	return 0;
}


