#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,b,g;
        cin >> n >> b >> g;
        if(b == g || abs(b - g) < 2){
            cout << "The teacher wins!" << endl;
        }else{
            cout << "Little Jhool wins!" << endl;
        }
    }
    return 0;
}