#include<iostream>
using namespace std;

struct input{
    char FirstName[30],LastName[30];
    int Age,Year;
}

int main(){
    while(!cin.eof()){
        intput taken;
        cin >> taken.FirstName >> taken.LastName >> taken.Age >> taken.Year;
    }
    return 0;
}