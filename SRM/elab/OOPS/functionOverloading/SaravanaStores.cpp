#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Salary{
    public:
        void Increment(int currsal){
           cout << currsal << endl;
        }
        void Increment(int currsal,int bonus){
            cout <<  currsal + bonus << endl;
        }
};

int main(){
    Salary ob;
    int a,b;
    cin >> a >> b;
    ob.Increment(a);
    ob.Increment(a,b);
    return 0;
}