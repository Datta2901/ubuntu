#include<bits/stdc++.h>
using namespace std;

bool Check(int a,int b){
    if(a + b == 180){
        return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(Check(a,c) || Check(b,d)){
            cout << "Yes" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}