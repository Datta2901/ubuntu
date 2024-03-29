#include<bits/stdc++.h>
using namespace std;

int bruteForce(int n,int base){
    // to raise the given  base n times
    int result =1;
    for(int i = 0; i < n; i++){
        result = result * base;
    }
    return result;
}

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

int modularExponentiation(int n,int base,int p){
    int result = 1;
    while(n){
        if(base % 2 == 0){
            result = (result * base) ;
            n--; 
        }else{
           base *= base;
           n /= 2;
        }
    }
}

int main(){


    return 0;
}