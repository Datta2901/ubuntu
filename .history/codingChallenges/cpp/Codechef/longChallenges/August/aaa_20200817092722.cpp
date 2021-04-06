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
#define MP make_pair
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
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)
#define num 100
typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;
int main()
 {
   EXECUTE_FASTER
   testcase(){
       ll n,k;
       cin >> n >> k;
       vec(ll) guests(n+1);
       map<ll,ll> mp;
       ll ans = 0, vc = 0;
       vectorInput(guests,n);

     vector<vector<ll> >column(n+1);
     rep(n,i){
        rep(n,j){
            column[i][j] = 0;
        }
     }

     rep(n,i){
         mp.clear();
         rep(n,j){
            if(j == 0){
                column[i][j] = 0;
            }else{
                column[i][j] = column[i][j - 1];
            }
            if(mp.count(guests[j]) > 0){
                if(mp[guests[j]] == 1){
                    column[i][j] += 2;
                }else{
                    column[i][j] += 1;
                }
            } 
            mp[guests[j]]++;
         }
     }

    ll answer = LONG_LONG_MAX;
    ll arrangement[101][1001];

    repeat(i,num,0){
        repeat(j,num,0){
            arrangement[i][j] = 0;
        }
    }

    repeat(i,num,2){
        arrangement[i][1] = 0;
    }

    repeat(i,2,num){
        repeat(j,2,n){
            ll minimum = LONG_LONG_MAX;
            re(1,j,k){
                minimum  = min(minimum,arrangement[i - 1][p] + )
            }
            
        }
    }
  
   }
    return 0;
 }