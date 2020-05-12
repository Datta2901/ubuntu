#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,data) for(vector<data> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define vec(datStruct) vector<datStruct>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin >> t;
    ll a,b,l,r,c,d;
    while(t--){
        cin >> a >> b >> l >> r ;
        c = a | b;
        if( c >= l && c <= r){
            d = (a & c)*(b & c);
                if(d == 0){
                    cout << l << endl;
                    continue;
                }
            cout << c << endl;
            continue;
        }
    }
    return 0;
}