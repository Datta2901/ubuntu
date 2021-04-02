#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    float a;
    cin >> a;
    int b = a;
    try{
        if(b == a){
            cout << "Integer\n";
        }else{
            cout << "Floting\n";
        }
    }
    catch(bool){
        
    }

    return 0;
}