#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    try{
        if(b!=0){
            cout << a/b << endl;
        }else{
            throw(0);
        }
    }catch(...){
        cout << "Divide By Zero Exception\n";
    }
    return 0;
// 