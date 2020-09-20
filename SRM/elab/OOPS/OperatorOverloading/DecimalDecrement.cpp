#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Decimal{
    public:
        double number;
        void getx(){
            cin >> number;
        }
        void operator --(){
            number -= 0.1;
            cout << number << endl;
        }
};

int main(){
    Decimal obj;
    obj.getx();
    obj.operator --();
    return 0;
}