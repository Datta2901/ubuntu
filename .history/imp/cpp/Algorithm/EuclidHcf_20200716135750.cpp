#include<bits/stdc++.h>
using namespace std;

int  EclidDivionToFindHcf(int a,int b){
    if(b == 0){
        return a;
    }
    return EclidDivionToFindHcf(b,a % b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        EclidDivionToFindHcf(a,b);
    }
    return 0;
}