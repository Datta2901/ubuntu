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
        void sum(){
            cout << " "
        }
};

class C:public A,public B{

};

int main(){

    return 0;
}