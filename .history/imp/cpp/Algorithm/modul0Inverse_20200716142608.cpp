#include<bits/stdc++.h>
int main()
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