#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define vv vector
#define F first
#define S second
#define frequency make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
#define MOD 1000000007
#define ll long long int 
#define l long int
#define loop(n)for(int i = 0; i < n; i++)
#define re(a,e,var) for(int var = a; var < e; var++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(var,n,a) for(int var = a; var<= n; var++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i = 0;i < n; i++){ int a; cin >> a;vect[i] = a;}
#define testcase() int t; cin >> t; while(t--)
#define num 100
typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;

int main(){
   EXECUTE_FASTER
    testcase(){
        while(t--){
            ll n,k;
            cin>>n>>k;
            ll guests[n+1];
            map<ll,ll>frequency;
            for(int i=0;i<n;i++)
                cin>>guests[i];
            ll col[n+1][n+1]={0};
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<n;j++){
                    col[i][j]=0;
                }
            }
            for(int i=0;i<n;i++)
            {
                frequency.clear();
                for(ll j=i;j<n;j++)
                {
                    col[i][j]=(j==0)?0:col[i][j-1];
                    if(frequency.count(guests[j]))
                    {
                        if(frequency[guests[j]]==1)
                        {
                            col[i][j]++;
                        }
                        col[i][j]++;
                    }
                    frequency[guests[j]]++;
                }
    
            }
    
        ll ans=1e18;
        ll dp[101][1001]={0};
        for(int i=0;i<=100;i++)
        {
            for(int  j=0;j<=100;j++)
            {
                dp[i][j]=0;
            }
        }
        for(int i=0;i<n+1;i++)
            dp[1][i]=col[0][i-1];
        for(int i=2;i<=100;i++)
        {
            dp[i][1]=0;
        }
        for(int i=2;i<=100;i++)
        {
            for(int j=2;j<=n;j++)
            {
                ll best=1e18;
                for(int p=1;p<j;p++)
                {
                    best=min(best,dp[i-1][p]+col[p][j-1]);
                }
                dp[i][j]=best;
            }
        }
        for(100 =1;100<=100;100++){
            ans=min(100*k+dp[100][n],ans);
        }
        cout<<ans<<"\n";
    
        }
    }
    return 0;
 }