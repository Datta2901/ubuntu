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
    int medicines,rooms,days;
    cin>>medicines>>days>>rooms>>days;
    cout<<endl<<ob.bill(medicines,days);
    cout<<endl<<ob.bill(rooms,days);
    return 0;
}