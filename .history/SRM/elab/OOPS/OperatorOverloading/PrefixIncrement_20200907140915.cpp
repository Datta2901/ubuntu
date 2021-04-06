#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class increment{
    public:
        int a,c;
        double b;
        void getx(){
            cin >> a >> b >> c; 
        }
        void operator ++();
};

void increment :: operator ++(){
    a++,
}


int main(){

    return 0;
}