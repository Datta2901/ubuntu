#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class country{
    public:
        string country_name;
        int polio,literacy;
        virtual void getdata(){
            cin >>  country_name >> polio >> literacy;
        };
        virtual void display(); 
};

class state:public country{
    public:
        string state_name;
        int polio,literacy;
        void getdetails(){
            cin >> 
        }

};

int main(){

    return 0;
}