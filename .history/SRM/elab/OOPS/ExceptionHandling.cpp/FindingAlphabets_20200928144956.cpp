#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char a,b;
    cin >> a >> b;
    try{
        if('A'<=a &&'Z'>=a){
            cout << "character C is alphabetic " << endl;
        }else{
            throw(b);
        }

    }catch(char){
        cout << "" << endl;
    }
    return 0;
}