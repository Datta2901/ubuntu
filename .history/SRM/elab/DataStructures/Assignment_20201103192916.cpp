#include<iostream>
using namespace std;

// taking input 
struct Input{
    char First_Name[30],Last_Name[30],Date_of_birth[9];    
    int Age;
};

// For the Queue
struct QueueNode{
    Input taken;
    QueueNode* next;
    QueueNode(Input Add_Details){
        taken = Add_Details;
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

    struct  Dequeue(){
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
            cout  << current->taken.First_Name     << " ";
            cout  << current->taken.Last_Name      << " ";
            cout  << current->taken.Age            << " ";
            cout  << current->taken.Date_of_birth  << endl;
            current = current->next;
        }
    }
};

// for Stack
struct StackNode{
    Input taken;
    StackNode* link;
    StackNode(Input a){
        taken = a;
    }
};

struct Stack{
    StackNode* top = NULL;
    void Push(Input AddData){
        struct StackNode* current = new StackNode(AddData);
        current->link = top;
        top = current;
    }
    void Pop(){
        if(top == NULL){
            return;
        }
        struct StackNode* Store;
        Store = top;
        top = top->link;
        top->link = NULL;
        delete(Store);
    }
};

int main(){
    Queue GetInformation;
    while(!cin.eof()){
        struct Input taken;
        cin >> taken.First_Name >> taken.Last_Name >> taken.Age >> taken.Date_of_birth;
        GetInformation.Enqueue(taken);
    }
    GetInformation.Display();
    cout << "Press Any Key to continue the processing\n";
    char control = '\0';
    cin >> control;
    if(control == '\0'){
        return 0;
    }



    return 0;
}