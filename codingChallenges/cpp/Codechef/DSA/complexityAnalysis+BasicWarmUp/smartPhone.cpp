#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<iterator>
#include<string>
#define loop(n) for(int i=0;i<n;i++)
#define testcase{} int t;cin >> t; while(t--)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
long long int n, a;
	cin >> n;
	vector<long long int> arr;
	long long int maxx = 0;
	for (long long int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	for (long long int i = 0; i < n; i++) {
		if (arr[i] * (n - i) > maxx) {
			maxx = arr[i] * (n - i);
		}
	}
	cout << maxx << endl;
    return 0;
 }