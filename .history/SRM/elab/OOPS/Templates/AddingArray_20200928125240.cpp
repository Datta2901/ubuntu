#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template<class T>
T sum(T arr[]){
    T a = 0;
    for(int i = 0; i < 5; i++){
        a += arr[i];
    }
    return a;
}

int main(){
    float arr[5];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5;){
            cin >> arr[j];
        }
        sum(arr);
    }

    return 0;
}