#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool cm(int a,int b,int c,int d,int e){
    if((a + b <= d && c <= e) || a + b <= e && c <= d){
        return true;
    }
    return false;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        if(cm(a,b,c,d,e) || cm(a,c,b,d,e) || cm(b,c,a,d,e)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}