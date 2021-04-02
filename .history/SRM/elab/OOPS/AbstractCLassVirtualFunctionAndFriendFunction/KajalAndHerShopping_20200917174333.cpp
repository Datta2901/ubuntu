#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Bill{
    public:
        int amount,a2;
        void getamount(){
            cin >> amount;
        }
        friend void billavg();
};

void billavg(Bill obj){

}


int main(){
    Bill obj;
    obj.getamount();
    billavg(obj);
    return 0;
}