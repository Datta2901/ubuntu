#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll ModuloExponentiation(ll a,ll b,ll m){
    ll res = 1;
    while(b>0){
        if(b&1){
            res = (res*a) % m;
        }
        a = (a*a)%m;
        b = b>>1;
    }
    return res;
}

int main(){
    EXECUTE_FASTER
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
        for(long long int  i = 1; i <= size; i++){
            cout << ModuloExponentiation(2,size - i,1000000007) << " ";
        }
        cout << endl;
    }
    return 0;
}