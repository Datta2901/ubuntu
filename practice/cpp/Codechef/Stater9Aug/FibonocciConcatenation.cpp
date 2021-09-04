// https://youtu.be/Ooa3zU9z4O0
// https://www.codechef.com/START9B/problems/FIBOSEQ
#include<bits/stdc++.h>
using namespace std;
#define maxN 1e5 + 1
#define MOD 1000000007
#define ll long long int
vector<long long>ones(maxN,0),size(maxN,0);

void precompute(){
    ones[0] = 0,ones[1] = 1;
    size[0] = 1,size[1] = 1;
    for(int i = 2; i < maxN; i++){
        ones[i] = (ones[i - 1] + ones[i - 2]) % MOD;
        size[i] = (size[i - 1] + size[i - 2]) % (MOD - 1);
    }
}

// int modularExponentiation(long long  n,long long base){
//     int result = 1;
//     while(n){
//         if(base % 2 == 0){
//             result = (result * base) % (MOD);
//             n--; 
//         }else{
//            base = (base * base ) % (MOD);
//            n /= 2;
//         }
//     }
//     return result;
// }
ll binexp(ll base, ll pow, ll M = MOD){
    ll res = 1;
    while(pow){
        if(pow & 1) res *= base;
        pow >>= 1, base *= base;
        if(M) base %= M, res %= M;
    }
    return res;
}

// 2^(mod - 1) % (mod) = 1  Fermats Little Theorem

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // long long  answer = (ones[n] * modularExponentiation(size[n] - 1,2)) % MOD;
        long long  answer = (ones[n] * binexp(2,size[n]- 1)) % MOD;
        cout << answer << endl;
    }
    return 0;
}