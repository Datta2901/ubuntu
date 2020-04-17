#include<iostream>
using namespace std ;
int main(){
    int t,c,a ;
    cin >> t;
    while(t--){
        long int num ;
        cin >> num ;
        if(num % 5 == 0){
            c =1;
        }else if(num % 2 == 0){
            a =1 ;
        }if(c == 1 && a == 1){
            cout << 0 << endl;
        }else if(c == 0){
            cout << -1 << endl;
        }if(c == 1 && a == 0){
            cout << 1 << endl ;
        }
    }

    return  0 ;
}
