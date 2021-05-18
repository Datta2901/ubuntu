#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       long long int answer = pow(2,n - 1),mod = 1e9 + 7;
       cout << answer << endl;
       cout << answer % mod << endl;
    }
    return 0;
}