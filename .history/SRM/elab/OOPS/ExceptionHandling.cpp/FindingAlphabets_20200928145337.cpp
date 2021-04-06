#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char a,b;
    cin >> a >> b;
    try{
        if('A'<=a &&'Z'>=a || 'a' <= a && 'z' >= a){
            cout << "character "<< a << " is alphabetic " << endl;
          	throw(b);
        }

    }catch(char b){
        cout << "character "<< b << " is not alphabetic " << endl;
    }
    return 0;
}