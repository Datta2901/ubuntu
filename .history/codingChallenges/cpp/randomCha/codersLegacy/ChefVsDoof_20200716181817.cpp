#include<bits/stdc++.h>
#define loop(n) for(int i= 0;i< n;i++)
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool flag = true;
        loop(n){
            int a;
            cin >> a;
            if(a % 2 == 0){
                flag = false;
            }
        }
        if(flag){
            cout << "YES\n";
        }else{
            cout << 
        }
    }
}