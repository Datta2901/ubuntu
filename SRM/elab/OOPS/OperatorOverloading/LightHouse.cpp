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
        Time clock;
        clock.operator>>(10);
        clock.operator<<(10);
    return 0;
}