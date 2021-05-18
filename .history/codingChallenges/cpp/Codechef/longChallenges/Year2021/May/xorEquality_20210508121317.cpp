#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       long long int mod = 1e9 answer = pow(2,n - 1,mod);
       cout << answer % mod << endl;
    }
    return 0;
}