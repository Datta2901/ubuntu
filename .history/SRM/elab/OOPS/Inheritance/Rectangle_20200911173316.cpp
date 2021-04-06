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
        ;
        int getPerimeter(int length,int berth){
            return (2 *(length + berth));
        }
};

class Rectangle :public Area,public Perimeter{
    public:
};

int main(){
    Rectangle rt;
    

    return 0;
}