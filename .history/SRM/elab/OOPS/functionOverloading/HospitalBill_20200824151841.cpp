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
    for(int i = 0; i < 2; i++){
        int a,b;
        cin >> a >> b;
        Hospital ob;
        cout << ob.bil(a,b); << endl; 
    }
    return 0;
}