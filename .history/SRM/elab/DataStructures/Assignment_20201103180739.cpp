#include<iostream>
using namespace std;

// taking input 
struct Input{
    char FirstName[30],LastName[30];    
    int Age,Year;
};


struct QueueNode{
    QueueNode* rear;
    QueueNode* front;
    struct Input{
        char FirstName[30],LastName[30];    
        int Age,Year;
    };

    void enqueue(struct input taken){
        QueueNode* Details = new QueueNode(input);
    }
};

int main(){
    // int GetSize = 0;
    while(!cin.eof()){
        struct Input taken;
        cin >> taken.FirstName >> taken.LastName >> taken.Age >> taken.Year;

        cout << taken.Year << endl;
    }
    return 0;
}