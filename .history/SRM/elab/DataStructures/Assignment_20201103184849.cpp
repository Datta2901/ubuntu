#include<iostream>
using namespace std;

// taking input 
struct Input{
    char First_Name[30],Last_Name[30];    
    int Age,;
};

// For the Queue
struct QueueNode{
    Input taken;
    QueueNode* next;
    QueueNode(Input person){
        taken = person;
        next = NULL;
    }
};

struct Queue{
    QueueNode *rear,*front;
    Queue(){
        rear = NULL;
        front  = NULL;
    }
    void Enqueue(Input a){
        QueueNode* Details = new QueueNode(a);
        if(rear == NULL){
            front = rear = Details;
            return;
        }
        rear->next = Details;
        rear = Details;
    }

    void Dequeue(){
        if(front == NULL){
            return;
        }
        QueueNode* store = front;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }
        delete(store);
    }
    void Display(){
        struct QueueNode *current;
        current = front;
        while(current != NULL){
            cout  << current->taken.First_Name  << " ";
            cout  << current->taken.Last_Name   << " ";
            cout  << current->taken.Age         << " ";
            cout  << current->taken.Year        << endl;
            current = current->next;
        }
    }
};

int main(){
    Queue GetInformation;
    while(!cin.eof()){
        struct Input taken;
        cin >> taken.First_Name >> taken.Last_Name >> taken.Age >> taken.Year;
        GetInformation.Enqueue(taken);
    }
    GetInformation.Display();
    return 0;
}