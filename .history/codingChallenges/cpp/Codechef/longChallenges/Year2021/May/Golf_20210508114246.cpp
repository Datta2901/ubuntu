#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,x,k;
        cin >> n >> x >> k;
        if(x % 2 == 0 && k % 2 == 0){
            cout << "YES\n";
            continue;
        }if(x % 2 == 0 && k % 2 != 0 && n % 2 != 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}