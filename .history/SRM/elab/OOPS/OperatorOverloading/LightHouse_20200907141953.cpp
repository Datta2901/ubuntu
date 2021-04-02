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
            
        }
};


int main(){

    return 0;
}