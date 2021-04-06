#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll fastModExp(ll a,ll b,ll m){

    ll res = 1;
    while(b>0){
        if(b&1){
            res = (res*a)%m;
        }
        a = (a*a)%m;
        b = b>>1;
    }
    return res;
}

// long long int modularExponentiation(long long int a,long long int b){
//     long long int result = 1; 
//     while(b > 0){
//         if(b & 1){
//             result = (result * a) % Mod;
//         }
//         a = (a * a) % Mod;
//         b = b >> 1;
//     }
//     return result;
// }

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int size;
        cin >> size;
        vector<long long int> data;
        for(long long int i = 0; i < size; i++){
            long long int a;
            cin >> a;
            data.push_back(a);
        }
        for(long long int  i = 0; i < size; i++){
            cout << fastModExp(2,size - i,1,000,000,007) << " ";
        }
        cout << endl;

    }
    return 0;
}