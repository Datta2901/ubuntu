#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next = NULL;
    struct Node* prev = NULL;
};

void printList(struct Node *a){
    Node *head = a;
    cout << "Iterate from front : ";
    while(a->next != NULL){
        cout << a->data << " ";
        a = a->next;
    }
    cout << a->
    cout << endl;
    cout << "Iterate from back : ";
    while(a != head){
        cout << a->data << " ";
        a = a->prev;
    }
}

Node* GetInput(int size){
    Node *head = NULL,*temp,*currPrev;
    int data;
    for(int i = 0; i < size; i++){
        Node* newnode = new Node();
        cin >> data;
        newnode->data = data;
        if(head == NULL){
            head = newnode;
            temp = head;
        }else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    temp->next = NULL;
    return head;
};

int main(){
    int size;
    cin >> size;
    Node *head;
    head = GetInput(size);
    printList(head);
    return 0;
}