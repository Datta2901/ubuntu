#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char a,b;
    cin >> a >> b;
    try{
        if('A'<=a &&'Z'>=a || 'a' <= a && 'z' >= a){
            cout << "character "<< a << " is alphabetic " << endl;
        }else{
            throw(b);
        }

    }catch(char){
        cout << "character "<< b << " is alphabetic " << endl;
    }
    return 0;
}