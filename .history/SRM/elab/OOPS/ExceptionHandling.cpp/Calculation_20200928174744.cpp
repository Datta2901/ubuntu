#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    float a = 0, b = 0,c =0;
    try{
        
        if(cin){
            float answer = a *pow((1 + 0.01* b),c);
            answer -= a;
            cout << "Compound Interest is:" << answer;

        }else{
            throw(false);
        }
    }catch(bool){
        cout << "Invalid input. Try again\n";
    }

    return 0;
}