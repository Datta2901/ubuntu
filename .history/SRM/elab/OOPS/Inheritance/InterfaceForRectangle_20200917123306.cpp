#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Area{
    public:
        float getArea(float l,float h){
           return l * h; 
        }
};

class Perimeter{
    public:
        float getPerimeter(float l,float h){
            return 2*(l + h);
        }
};

class Rectangle:public Area,public Perimeter{
    public:

};

int main(){
    Rectangle d;
    float a,b;
    cout << d.getArea(a,b) << endl;
    d.getPerimeter(a,b); 
    return 0;
}