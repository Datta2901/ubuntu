#include<bits/stdc++.h>
using namespace std;
class Node{
    
    int data;
    Node* next;
    Node* previous;
};

void printList(Node* node)  
{  
    Node* last;  
    printf("\nTraversal in forward direction \n");  
    while (node != NULL) {  
        printf(" %d ", node->data);  
        last = node;  
        node = node->next;  
    }  
  
    printf("\nTraversal in reverse direction \n");  
    while (last != NULL) {  
        printf(" %d ", last->data);  
        last = last->prev;  
    }  
    cout << endl;
} 

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
    third->previous = second;

    printList(head);

    return 0;
}