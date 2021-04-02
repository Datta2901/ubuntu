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
            return 2 * (l + b) ;
        }
};

int main(){
    Rectangle obj;
    cout << "Perimeter of Rectangle is: "<<obj. << endl;

    return 0;
}