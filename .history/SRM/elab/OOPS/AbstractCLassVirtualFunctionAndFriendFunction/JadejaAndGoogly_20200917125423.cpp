#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class googly{
    public:
        int number;
        void getballnumber(){
            cin  >> number;
        }
        friend int isgoogly();
};

int  isgoogly(class googly e1){
    if(e1.number % 2 != 0){
        cout << "Googly Ball" << endl;
    }else{
        cout << "Not a Googly Ball" << endl;
    }
};


int main(){
    googly e1;
    e1.getballnumber();
    isgoogly(e1);
    return 0;
}