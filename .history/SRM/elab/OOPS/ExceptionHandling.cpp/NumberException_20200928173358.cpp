#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    float a;
    cin >> a;
    int b = a;
    try{
        if(a == b){
            cout << "Number of exceptions: " << b/4 << endl;
        }else{
            throw(a);
        }
    }catch(...){
        cout << Invalid input\n
    }


    return 0;
}