#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Time{
    public:
        int hours,mins,secs;
        void read();
        void operator >> (int h){
            cin >> hours >> mins >> secs;
        }
        void operator << (int h){
            cout << hours << " Hours " <<  mins << " Mins " << secs << " secs" << endl;
        }
};

int main(){
        int h = 10;
        Time clock;
        clock.operator>>

    return 0;
}