#include<iostream> 
#include<algorithm>
using namespace std ;
int main(){
    int t ;
    cin >> t;
    while(t--){
        long int  num1,num2,hcf,lcm;
        cin >> num1 >> num2;
        hcf = __gcd(num1, num2);
        lcm =num1*num2/hcf;
        cout << hcf << " " << lcm << endl ;
    }
    return 0 ;
}