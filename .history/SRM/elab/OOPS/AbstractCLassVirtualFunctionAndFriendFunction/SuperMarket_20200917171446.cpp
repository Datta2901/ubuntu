#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class consumer{
    public:
    string name;
    virtual getdata(){
        cin >> name;
    }
    virtual display(){
        cout << name << endl;
    }
};

class transaction:public consumer{
    public:
        void getdata(){
            
        }
};

int main(){

    return 0;
}