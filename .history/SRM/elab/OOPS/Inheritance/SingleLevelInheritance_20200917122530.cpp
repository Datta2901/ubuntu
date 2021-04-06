#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class A{
    public:
        int x;
        void getxval(){
            cin >> x;
        }
};

class B{
    public:
        int y;
        void getyval(){
            cin >> y;
        }       
};

class C:public A,public B{
    public:
        void sum(){
            cout << "Sum = " << x + y << endl;
        }
        void mul(){
            cout << "mul = " << x * y << endl;
        }
};

int main(){
    C obj;
    obj.
    return 0;
}