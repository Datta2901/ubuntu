#include<iostream>
#include<vector>
using namespace std ;
int main(){

    int t ;
    cin >> t;
    int n,twos = 0,zeros = 0;
    long int a;
    while(t--){
       
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> a;
            if(a == 0){
                zeros++;
            }else if(a == 0){
                twos++;
            }
        }

        a = zeros*(zeros - 1)/2 + twos*(twos - 1)/2;
        cout << a <<endl ;
    }






    return 0 ;
}