#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char a,b;
    cin >> a >> b;
    try{
        if('A'<=a &&'Z'>=a){
            cout << "" << endl;
        }else{
            throw(b);
        }

    }catch(...){

    }
    return 0;
}