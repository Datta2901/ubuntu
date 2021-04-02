#include<bits/stdc++.h>
using namespace std;

void EclidDivionToFindHcf(int a,int b){
    if(b == 0){
        cout << a << endl;
        return;
    }
    EclidDivionToFindHcf(b,a % b);
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