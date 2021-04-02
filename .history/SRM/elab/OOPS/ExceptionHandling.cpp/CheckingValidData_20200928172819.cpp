#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks;
    try{
        if(0 < marks <= 100){
            cout << "Valid Mark\n";
        }else{
            throw(false);
        }

    }catch(...){

    }

    return 0;
}