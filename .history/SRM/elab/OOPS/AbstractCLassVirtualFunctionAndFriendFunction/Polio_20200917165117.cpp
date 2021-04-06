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
        virtual void display(){
            cout << "" << country_name << endl;
            cout << "" << polio << endl;
            cout << "" << literacy << endl;
        }; 
};

class state:public country{
    public:
        void getdetails(){
            cin >> country_name >> polio >> literacy;
        }
        void display(){
            cout << "" << country_name << endl;
            cout << "" << polio << endl;
            cout << "" << literacy << endl;

        }

};

int main(){

    return 0;
}