#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Hospital{
    public:
        float bill(float medicines,int days){
            return medicines * days;
        }
        int bill(int room,int days){
            return room * days;
        }
};

int main(){
    Hospital ob;
    int medicines,rooms,days;
    cin>>medicines>>days>>rooms>>days;
    cout<< ob.bill(medicines,days) << endl;
    cout<< ob.bill(rooms,days) << endl;
    return 0;
}