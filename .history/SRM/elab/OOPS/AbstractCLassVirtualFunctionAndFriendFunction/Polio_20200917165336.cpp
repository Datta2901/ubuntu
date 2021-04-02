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
            cout << "Country Name " << country_name << endl;
            cout << "Country Polio% " << polio << endl;
            cout << "Country Litteracy%" << literacy << endl;
            cout << "The Measure of Interdependency 1.7" << endl;
        }; 
};

class state:public country{
    public:
        void getdetails(){
            cin >> country_name >> polio >> literacy;
        }
        void display(){
            cout << "State Name " << country_name << endl;
            cout << "%Age of Polio of State " << polio << endl;
            cout << "%Age of Literacy of State " << literacy << endl;

        }

};

int main(){

    return 0;
}