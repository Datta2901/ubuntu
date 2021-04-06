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
        int a,b;
        cin >> a >> b;
        Hospital ob;
        cout << ob.bill(a,b) << endl; 
    }
    return 0;
}