#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s; 
        cin >> s;
        int ans = 0, last = -(1e6);
        for (int i = 0; i < n; i++){
            if (s[i] == '0'){
                continue;
            }
            if (i - last <= k + 1) {
                last = min(last + k ,i + 1);
            }else {
                ans++;
                last = i + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}