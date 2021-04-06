#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node* next;
    Node* previous;
};

int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // 1st node
    head->data = 1;
    head->next = first;
    head->previous = NULL;

    //2nd node
    first->data = 2;
    first->next = second;
    first->previous = head;

    // 3rd node 
    second->data = 3;
    second->next = third;
    second->previous = first;
    
    //4th node
    third->data = 4;
    third->next = NULL;
    third->previous = 








    return 0;
}