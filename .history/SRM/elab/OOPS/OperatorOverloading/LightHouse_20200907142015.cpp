#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Time{
    public:
        int hours,mins,secs;
        void read();
        void operator >> (){
            cin >> hours >> mins >> secs;
        }
        void operator << (){
            cout <<20 Hours 10 Mins 12 secs
        }
};


int main(){

    return 0;
}