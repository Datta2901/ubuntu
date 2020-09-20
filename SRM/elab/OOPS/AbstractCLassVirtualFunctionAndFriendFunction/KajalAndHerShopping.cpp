#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Bill{
    public:
        int amount,a2;
        void getamount(){
            cin >> amount >> a2;
        }
        friend float billavg();
};

float billavg(Bill obj){
    return(float)(obj.amount + obj.a2)/2; 
}


int main(){
    Bill obj;
    obj.getamount();
     cout << "Average amount spent:"<< billavg(obj)<< endl;
    return 0;
}