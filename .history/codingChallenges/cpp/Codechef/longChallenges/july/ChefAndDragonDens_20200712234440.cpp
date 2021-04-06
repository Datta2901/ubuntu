#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#include<unordered_map>
#define ii iterator
#define F first
#define S second
#define MP make_pair
#define v vector
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

int main(){
    vector<long int> taste;
    long int n,Queries;
    cin >> n >> Queries;
    vector<long int>  height;
    loop(n){
        ll a;
        cin >> a;
        height.pb(height[i]);
    }
    vectInput(taste,n);   
    while(Queries--){
        long int a,b,c,answer;
        cin >> a >> b >> c;
        if(a == 1){
            taste[b - 1] = c;
        }else{
            if(height[b - 1] >= height[c - 1]){
                cout << -1 << endl;
                continue;
            }
            if(b - 1 > c - 1){
                requiredAnswer()
            }

        }
    }


    return 0;
}