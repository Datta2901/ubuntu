#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class country{
    public:
        string country_name;
        int polio,literacy;
        virtual void getdata(){
            cin >>  country_name >> 
        };
        virtual void display(); 
};

class state:public country{
    public:
        void getdetails(){

        }

};

int main(){

    return 0;
}