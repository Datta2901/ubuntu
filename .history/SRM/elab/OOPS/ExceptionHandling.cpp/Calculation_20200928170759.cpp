#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 0,c =0;
    cin >> a >> b;
    try{
        if(cin){
            cin >> b;

        }else{
            throw(false);
        }
    }catch(bool){
        cout << "Invalid input. Try again\n";
    }

    return 0;
}