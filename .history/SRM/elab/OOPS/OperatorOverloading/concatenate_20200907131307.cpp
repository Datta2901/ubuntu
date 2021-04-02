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
    string a,b;
    cin >> a >> b;
    
    return 0;
}