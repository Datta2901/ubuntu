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

class C : public  B,public A{
    public:
        int total;
        void display(){
            cout <<  << endl;
        }
};


int main(){
    C sample;
    sample.A::display();
    sample.B::display();
    sample.C::display();
    return 0;
}