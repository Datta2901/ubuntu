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
        next = NULL;
    }
};

struct Queue{
    QueueNode *rear,*front;
    rear
    void enqueue(Input a){
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
            cout  << current->taken.FirstName  << " ";
            cout  << current->taken.LastName   << " ";
            cout  << current->taken.Age        << " ";
            cout  << current->taken.Year       << endl;
            current = current->next;
        }
    }
};

int main(){
    Queue GetInformation;
    while(!cin.eof()){
        struct Input taken;
        cin >> taken.FirstName >> taken.LastName >> taken.Age >> taken.Year;
        GetInformation.enqueue(taken);
        // cout << taken.Year << endl;
    }
    // GetInformation.Dequeue();
    GetInformation.Display();
    return 0;
}