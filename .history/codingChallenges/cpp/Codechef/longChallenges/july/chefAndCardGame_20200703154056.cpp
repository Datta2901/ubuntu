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
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

long long int sum(long int a){
    long long int answer = 0;
    while(a != 0){
        answer += (a % 10);
        a /= 10;
    }
   return answer; 
} 

int main(){
    EXECUTE_FASTER
    testcase(){
        int rounds;
        cin >> rounds;
        vector<long int> chef,morty;
        loop(rounds){
            long int a;
            cin >> a;
            chef.pb(a);
        }

        loop(rounds){
            long int a;
            cin >> a;
            morty.pb(a);
        }
        long long int Cpoints = 0,Mpoints = 0;
        loop(rounds){
            ll a = sum(chef[i]) ;
            ll b = sum(morty[i]);
            if(a > b ){
                Cpoints++;
            }else if( a == b){
                Cpoints++;
                Mpoints++;
            }else{
                Mpoints++;
            }
        }
        ll diff = Mpoints - Cpoint
        if(Mpoints > Cpoints){
            cout << 1 << " " << 
        }

    }
    return 0;
}