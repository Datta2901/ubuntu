#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Area{
    public:
        int length,berth;
        int getArea(){
            return length * berth;
        }
};

class Perimeter{
    public:
        int length,berth;
        int getPerimeter(){
            return (2 *(length + berth));
        }
};

class Rectangle :public Area,public Perimeter{
    public:
    Rectangle(int l,int b){
        length = l;
        breth = b;
    }
};

int main(){
    Rectangle rt;
    

    return 0;
}