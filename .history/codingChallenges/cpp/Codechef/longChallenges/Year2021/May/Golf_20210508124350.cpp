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
        n += 1;
        // forward direction
        if(x % k == 0){
            cout << "YES\n";
        }
        // backward direction
        else if((x - n) % (-k) == 0 && (x - n) / (-k) >= 0){
            cout << "YES\n";
        }
        //otherwise
        else{
            cout << "NO\n";
        }
    }
    return 0;
}





