// https://www.codechef.com/LRNDSA03/problems/DPAIRS
#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>

#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i=0;i<n;i++)
#define rep(var,e) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;
int main()
 {
    EXECUTE_FASTER
    long long int n,m,x;
    cin>> n>> m;
       vector<pair<ll,ll>> A,B;
       rep(i,n){
       	cin>>x;
       	A.push_back(make_pair(x,i));
       }
       rep(i,m){
       	cin>>x;
       	B.push_back(make_pair(x,i));
       }
       sort(A.begin(),A.end());
       sort(B.begin(),B.end());
       rep(i,m){
       	cout<<A[n-1].second<<" "<<B[i].second<<endl;
       }
       rep(i,n-1){
        cout<<A[i].second<<" "<<B[0].second<<endl;
       }
       //time complexity is o
    return 0;
 }