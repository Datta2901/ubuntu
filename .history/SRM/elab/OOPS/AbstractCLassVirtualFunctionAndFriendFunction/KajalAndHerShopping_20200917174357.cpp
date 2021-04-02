#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Bill{
    public:
        int amount,a2;
        void getamount(){
            cin >> amount >> a2;
        }
        friend void billavg();
};

void billavg(Bill obj){
    cout << obj.amount + 
}


int main(){
    Bill obj;
    obj.getamount();
    billavg(obj);
    return 0;
}