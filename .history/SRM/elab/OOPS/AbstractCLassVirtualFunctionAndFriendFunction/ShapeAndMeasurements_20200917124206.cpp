#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Shape{
    public:
        virtual int getPerimeter()= 0;  //pure virtual function
        int l,b;
};

class Rectangle:public Shape{
    public:
        int getPerimeter(){
            
        }
};

int main(){

    return 0;
}