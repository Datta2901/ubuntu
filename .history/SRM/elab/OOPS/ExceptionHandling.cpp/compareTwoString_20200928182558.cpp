#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string a = "-1",b = "-1";
    cin >> a >> b;
    try{
        if(a == b){
            cout << a << " is " << b << endl; 
        }else if(a == "-1" || b =="-1"){
            throw(true);
        }
    }catch(...){
        cout << "Invalid input Try again\n";
    }


    return 0;
}