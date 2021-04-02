#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int main(){
    // declaration of nodepointers
    Node* head = NULL;
    Node* first = NULL;
    Node* third = NULL;

    head = new Node();
    first = new Node();
    third = new Node();

    head->next = first;
    
    first->data = 12;
    first->next = seco






    return  0;
}