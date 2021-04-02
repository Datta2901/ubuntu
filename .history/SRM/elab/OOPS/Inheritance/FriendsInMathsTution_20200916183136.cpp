#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class A{
    public:
        int number;
        void display(){
            cin >> number;
        }
};

class B{
    public:
        int cost;
        void display(){
           cin >> cost; 
        }
};

class C : public  B,public A{
    public:
        int total;
        void display(){
            total = cost * number;
            cout << total << endl;
        }
};


int main(){
    C sample;
    sample.A::display();
    sample.B::display();
    sample.C::display()

    return 0;
}