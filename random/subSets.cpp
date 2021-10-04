// Unique Subsets can be formed from the given array
#include <bits/stdc++.h>
using namespace std;

int countUnique(int arr[], int n){
	unordered_set<int> s;
	for (int i = 0; i < n; i++)
		s.insert(arr[i]);
	int count = pow(s.size(), 2);
	return count;
}
int main(){
    int a;
    cin>>a;
	int arr[a],i;
	for(i=0;i<a;i++){
	    cin >>arr[i];
	}
	int m=1000000007;
	int p=(countUnique(arr,a)) % m;
	cout << p;
	return 0;
}