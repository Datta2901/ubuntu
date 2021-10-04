// #include<bits/stdc++.h>
// using namespace std;
// #define MOD long(1e9 + 7)

// vector<int> Fact(20001,0);
// void Factorial(int n){
//     Fact[0] = 1;
//     Fact[1] = 1;
//     Fact[2] = 2;
//     for(int i = 3; i <= 2000; i++){
//         Fact[i] = (long(i * ((Fact[i - 1]) % MOD)) % MOD);
//     }
// }





// int main(){
//     Factorial(2000);
//     int t;
//     cin >> t;
//     while(t--){
//         int n,m;
//         cin >> n >> m;
//         int p = Fact[n];
//         int q = Fact[m - 1];
//         int num = Fact[n + m - 1];
//         // cout << p << " " << q << " " << den << endl;
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long int
#define mod 1000000007

ll powmod(ll a,ll b)
    {
    b=mod-2;
    ll result=1;
    while(b)
        {
        if(b&1)
            result=(result*a)%mod;
        b=b>>1;
        a=(a*a)%mod;
    }
    return result;
}
int main() {

    int t,n,m,i;
    ll fact[201];
    fact[0]=fact[1]=1;
    for(i=2;i<201;i++)
        fact[i]=(fact[i-1]*i)%mod;
    scanf("%i",&t);
    while(t--)
        {
        scanf("%i%i",&n,&m);
        ll ans=fact[n+m - 1]*powmod((fact[n]*fact[m - 1])%mod,mod);
        printf("%lli\n",ans%mod);
    }
    return 0;
}