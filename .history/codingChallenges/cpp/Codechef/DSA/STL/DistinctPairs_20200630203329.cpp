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
    cin>>n>>m;
       vector<pair<ll,ll>> A,;
       f(i,n)
       {
       	cin>>x;
       	a.push_back(make_pair(x,i));
       }
       f(i,m)
       {
       	cin>>x;
       	b.push_back(make_pair(x,i));
       }
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       rep(i,m){
       	cout<<a[n-1].second<<" "<<b[i].second<<endl;
       }
       rep(i,n-1){
        cout<<a[i].second<<" "<<b[0].second<<endl;
       }
    return 0;
 }