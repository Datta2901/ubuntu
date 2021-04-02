#include<iostream>
using namespace std;

struct input{
    char FirstName[30],LastName[30];
    int Age,Year;
};

int main(){
    while(!cin.eof()){
        struct input taken;
        cin >> taken.FirstName >> taken.LastName >> taken.Age >> taken.Year;
        cout << taken.Year << endl;
    }
    return 0;
}