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
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it =  it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sov.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

int main(){
    EXECUTE_FASTER
    testcase(){
        long int x,y,n;
        long long int rem,diff ;
        cin >> x >> y >> n;
        // rem =  n % x;
        // diff =  rem - y ;
        // if(diff >= 0){
        //     cout << n - diff << endl;;
        // }else{
        //     cout << n - (x + diff)  << endl;
        // }
        ll multiple;
        multiple  = (n / x ) * x;
        diff = x -y;
        cout << multiple % x << " ";
        if(multiple + diff <= n){
            cout << multiple + diff << " " << (multiple + diff) % x << " " << y << x << endl;
        }else{
            cout << multiple - diff << " " << (multiple - y) % x << " " << y << x << endl;
        }
        
    }
    return 0;
}