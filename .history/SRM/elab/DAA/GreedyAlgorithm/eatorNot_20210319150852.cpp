#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(int set[], int n, int sum){
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	if (set[n - 1] > sum)
		return isSubsetSum(set, n - 1, sum);

	return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

int main(){
    int a
	return 0;
}
