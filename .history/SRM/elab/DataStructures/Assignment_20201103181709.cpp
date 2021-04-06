#include<iostream>
using namespace std;

// taking input 
struct Input{
    char FirstName[30],LastName[30];    
    int Age,Year;
};


struct QueueNode{
    Input taken;
    QueueNode* next;
    QueueNode(Input person){
        taken = person;
    }
};

struct Queue{
    QueueNode* rear;
    QueueNode* front;
    
    void enqueue(Input taken){
        QueueNode* Details = new QueueNode(taken);
        if(rear == NULL){
            front = rear = Details;
            return;
        }
        rear->next = Details;
        rear = Details;
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