#include<bits/stdc++.h>
using namespace std;
class Node{
public:    
    int data;
    Node* next;
    Node* previous;
};

void printList(Node* node)  
{  
    Node* last;  
    printf("Traversal in forward direction \n");  
    while (node != NULL) {  
        printf(" %d ", node->data);  
        last = node;  
        node = node->next;  
    }  
  
    printf("\nTraversal in reverse direction \n");  
    while (last != NULL) {  
        printf(" %d ", last->data);  
        last = last->previous;  
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

    //adding a node at the  front
    Node* starting = new Node();
    starting->data = 5;
    starting->previous = NULL;
    starting->next = head;
    first->previous = starting; 
    cout << "------------------After adding a element at front of a doublelinkedlist--------------------------- " << endl;
    printList(starting);

    //adding a element at the end
    Node* ending = new Node();
    ending->data = 6;
    ending->next = NULL;
    ending->previous = third;
    third->next = ending;
    cout << "------------------After adding a element at end of a doublelinkedlist--------------------------- " << endl;
    printList(starting);

    //inserting a element a b/w first and second
    Node* middle = new Node();
    middle->data = 7;
    middle->prev = first;
    middle->next = second;

    

    return 0;
}