#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class concatenate{
    public:
        string answer,a;
        void read(){
            cin >> answer >> a;
        }
        void operator+(concatenate &){
            answer = answer + a;
        }
};

int main(){
    concatenate a;
    a.read();
    a.answer = a.answer + 
    return 0;
}