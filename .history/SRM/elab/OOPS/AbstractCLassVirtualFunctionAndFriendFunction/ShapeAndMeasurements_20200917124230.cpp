#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Shape{
    public:
        virtual int getPerimeter()= 0;  //pure virtual function
};

class Rectangle:public Shape{
    public:
        int l,b;
        int getPerimeter(){

        }
};

int main(){

    return 0;
}