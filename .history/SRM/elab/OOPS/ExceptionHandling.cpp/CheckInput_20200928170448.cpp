#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    float a;
    cin >> a;
    int b = a;
    int alp = a'
    try{
        if(b == a){
            cout << "Integer\n";
        }else if (b != a){
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