#include<iostream>
using namespace std;

// taking input 
struct Input{
    char FirstName[30],LastName[30];    
    int Age,Year;
};


struct QueueNode{

};

int main(){
    while(!cin.eof()){
        struct Input taken;
        cin >> taken.FirstName >> taken.LastName >> taken.Age >> taken.Year;
        cout << taken.Year << endl;
    }
    return 0;
}