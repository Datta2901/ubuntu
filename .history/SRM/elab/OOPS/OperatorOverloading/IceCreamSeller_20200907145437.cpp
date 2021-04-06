#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class matrix{
    public:
    int sa,sb,la,lb;
    double sanswer = 0,Lanswer = 0;
    void get(){
        cin >> sa >> sb >> la >> lb;
    }

    void operator *(matrix &){
        sanswer += 0.75 
    }

    void put(){
        cout << sanswer << endl;
        cout << Lanswer << endl;
    }
};

int main(){

    return 0;
}