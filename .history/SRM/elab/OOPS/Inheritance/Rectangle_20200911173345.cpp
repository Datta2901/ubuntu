#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Area{
    public:
        int getArea( int length,int berth;){
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
        int length,breth;
};

int main(){
    Rectangle rt;
    

    return 0;
}