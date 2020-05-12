#include<bits/stdc++.h>
#include<iostream>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
using namespace std;
int main(){
    int t;
    cin >> t ;
    while(t--){
        int l,r,k;
        cin >> l >> r >> k;
        if(r - l +1 == 1 ){
            cout << 1 << endl;
        }
        else{
            cout << k << endl; 
        }
    }

    return 0;
}