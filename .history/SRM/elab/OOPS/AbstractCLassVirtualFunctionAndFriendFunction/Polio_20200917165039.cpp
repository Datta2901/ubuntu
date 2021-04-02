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
        void getdetails(){
            cin >> country_name >> polio >> literacy;
        }
        void display(){
            cout << "" << country_name << ednl;

        }

};

int main(){

    return 0;
}