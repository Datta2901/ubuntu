#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    bool skip = true;
    for(int i = 0; i < 10; i++){
        string a;
        int number;
        cin >> a >> number;
        if(number == 103101){
            cout << "Student register number 103101 is exist";
            skip = false;
            break;
        }
        
    }
    if(skip){
        cout << "Student register number 103101 is not exist";
    }
    return 0;
}