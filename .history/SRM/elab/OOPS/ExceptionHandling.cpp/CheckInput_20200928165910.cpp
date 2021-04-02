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
        }else 
            cout << "Floting\n";
        }else{
            throw(false);
        }
    }
    catch(bool){
        cout << "Invalid Input\n";
    }
    return 0;
}