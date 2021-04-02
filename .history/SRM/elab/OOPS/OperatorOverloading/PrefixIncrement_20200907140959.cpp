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
    a++,b++,c++;
}

int main(){
    increment obj;
    obj.getx();
    obj.operator++()
    return 0;
}