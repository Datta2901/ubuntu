#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class A{
    public:
        int display(){
            int a;
            cin >> a;
            return a;
        }
};

class B{
    public:
        int display(){
            int b;
           cin >> b; 
           return b;
        }
};

class C:public B,public A{
    public:
        int total;
        void display(int a){
            cout << a << endl;
        }
};


int main(){
    C sample;
    sample.C::display(sample.A::display() *sample.B::display());
    return 0;
}