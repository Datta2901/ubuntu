#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#include<unordered_map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}cout << endl;
#define printVectofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define MOD 1000000007
#define ll long  int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(long int i=0;i<n;i++){ long int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

int GetCeilIndex(long int arr[], vector<long int>& T, long int l,long int r, long int key) 
{ 
	while (r - l > 1) { 
		int m = l + (r - l) / 2; 
		if (arr[T[m]] >= key) 
			r = m; 
		else
			l = m; 
	} 

	return r; 
} 

int LongestIncreasingSubsequence(long int arr[], long int n) 
{ 
	// Add boundary case, when array n is zero 
	// Depend on smart pointers 

	vector<int> tailIndices(n, 0); // Initialized with 0 
	vector<int> prevIndices(n, -1); // initialized with -1 

	int len = 1; // it will always point to empty location 
	for (long int i = 1; i < n; i++) { 
		if (arr[i] < arr[tailIndices[0]]) { 
			// new smallest value 
			tailIndices[0] = i; 
		} 
		else if (arr[i] > arr[tailIndices[len - 1]]) { 
			// arr[i] wants to extend largest subsequence 
			prevIndices[i] = tailIndices[len - 1]; 
			tailIndices[len++] = i; 
		} 
		else { 
			// arr[i] wants to be a potential condidate of 
			// future subsequence 
			// It will replace ceil value in tailIndices 
			int pos = GetCeilIndex(arr, tailIndices, -1, len - 1, arr[i]); 

			prevIndices[i] = tailIndices[pos - 1]; 
			tailIndices[pos] = i; 
		} 
	} 

	cout << "LIS of given input" << endl; 
	for (int i = tailIndices[len - 1]; i >= 0; i = prevIndices[i]) 
		cout << arr[i] << " "; 
	cout << endl; 

	return len; 
} 



int main(){
    vector<long int> taste;
    vector<pair<long int,long int> > heights;
    int size,Queries;
    cin >> size >> Queries;
    loop(size){
        long int a;
        cin >> a;
        heights.pb({a,i+1});
    }
    vectInput(taste,size);
    // printVect(taste,long int);
    // cout << "Before sorting ";
    // printVectofPairs(heights,long int);
    sort(heights.begin(),heights.end());
    cout << "After sorting " << endl;
    printVectofPairs(heights,long int);
    
    while(Queries--){
        long int a,b,c;
        cin >> a >> b >> c;
        if(a == 1){
            taste[b - 1] = c;
        }else{
             LongestIncreasingSubsequence(arr, n)
        }
    }


    return 0;
}