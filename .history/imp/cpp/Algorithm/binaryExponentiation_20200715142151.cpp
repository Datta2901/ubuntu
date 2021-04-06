#include<bits/stdc++.h>
using namespace std;

int bruteForce(int n,int base){
    // to raise the given  base ntimes
    int temp =1;
    for(int i = 0; i < n; i++){
        temp = temp * base;
    }
    return temp;
}

int main(){


    return 0;
}