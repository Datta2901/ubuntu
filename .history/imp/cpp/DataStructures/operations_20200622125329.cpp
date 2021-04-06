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
    Node* second = NULL;
    Node* third = NULL;

    second = new Node();
    first = new Node();
    third = new Node();

    head->next = first;
    
    first->data = 12;
    first->next = second;

    second->next = third;
    second->data = 14;






    return  0;
}