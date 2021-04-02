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
            cin >> l >> b;
            return 
        }
};

int main(){
            cout << "Perimeter of Rectangle is: "<< 2 * (l + b) << endl;

    return 0;
}