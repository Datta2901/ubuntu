#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t ;
    while(t--){
        int n,a;
        cin >> n;
        int b=n;
        for(int i = 0; i < b; i++){
            cin >> a ;
            if(a <= n){
                cout<<1;
                n=n-a;
            }else{
                cout<<0;
            }
        }
        cout << endl;
    }

    return 0 ;
}