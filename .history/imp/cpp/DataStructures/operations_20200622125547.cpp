#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void printList(Node *n){
    while(n != NULL){
        cout << n->data << " ";
    }
}

int main(){
    // declaration of nodepointers
    Node* head = NULL;
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocating the nodes in heap
    second = new Node();
    first = new Node();
    third = new Node();

    head->next = first;
    
    first->data = 12;
    first->next = second;

    second->data = 14;
    second->next = third;

    third->data = 15;
    






    return  0;
}