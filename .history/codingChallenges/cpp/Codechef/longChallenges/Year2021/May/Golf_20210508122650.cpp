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
        if(x % k == 0){
            cout << "YES\n";
        }if(x % k == 1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}

20 3

0 3 6 9  12 15 18 

20 17 14 11 8  5  2

0 2 3 5 6 9  11 12  14 15 17 18 20

20 5

0 5 