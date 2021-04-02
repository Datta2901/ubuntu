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
    head->next = second;
    head->







    return 0;
}