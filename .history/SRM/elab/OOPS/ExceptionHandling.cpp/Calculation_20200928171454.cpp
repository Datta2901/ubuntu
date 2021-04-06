#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 0,c =0;
    cin >> a >> b >> c;
    try{
        if(c != 0){
            float answer = a *pow((1 + 0.01* b),c);
            cout << "Compound Interest is:" << answer;

        }else{
            throw(false);
        }
    }catch(bool){
        cout << "Invalid input. Try again\n";
    }

    return 0;
}