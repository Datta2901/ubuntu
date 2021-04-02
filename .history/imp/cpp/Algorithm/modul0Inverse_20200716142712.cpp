#include<bits/stdc++.h>
using namespace std;
int modularExponentiation(int n,int base,int p){
    int result = 1;
    while(n){
        if(base % 2 == 0){
            result = (result * base) % p;
            n--; 
        }else{
           base = (base * base ) % p;
           n /= 2;
        }
    }
    return result;
}
// if we calculate the power of  a ^ m - 2 = a ^ -1 (mod m) 
// a ^ -1 is the modulo inverse according to the fermat little theorem
 //
int main(){



    return 0;
}