#include<bits/stdc++.h>
using namespace std;

// time complexity is O(N) 

int bruteForce(int n,int base){
    // to raise the given  base n times
    int result =1;
    for(int i = 0; i < n; i++){
        result = result * base;
    }
    return result;
}

// time complexity is O(logN) 

int power(int n,int base){
    int result = 1;
    while(n){
        if(base % 2 == 0){
            result *= base;
            n--; 
        }else{
           base *= base;
           n /= 2;
        }
    }

    /* or directly you can do
        result = pow(base,number);
    */    
    return result;
}
// if we calculate the power of  a ^ m - 2 = a ^ -1 (mod m) 
// a -1 is the modulo inverse 
 

// time complexity is O(logN) 

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
}

int main(){


    return 0;
}