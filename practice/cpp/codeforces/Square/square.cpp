#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","a",stdout);
    int t,a,b,c,d;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        if(a == c && b + d == a){
           cout << "YES\n";
        }else if(a == d && b + c == a){
            cout << "YES\n";
        }else if(b == c && a + d == b){
            cout << "YES\n";
        }else if(b == d && a + c == b){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}