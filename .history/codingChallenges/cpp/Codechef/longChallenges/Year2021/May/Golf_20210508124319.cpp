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
        // forwa
        if(x % k == 0){
            cout << "YES\n";
        }else if((x - n) % (-k) == 0 && (x - n) / (-k) >= 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}

// 20 3

// 0 3 6 9  12 15 18 

// 20 17 14 11 8  5  2



