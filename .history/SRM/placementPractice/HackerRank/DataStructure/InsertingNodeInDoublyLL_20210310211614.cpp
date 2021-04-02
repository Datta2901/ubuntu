#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next = NULL;
    struct Node* prev = NULL;
};

void printList(struct Node *a){
    Node *last;
    cout << "Iterate from front : ";
    while(a != NULL){
        cout << a->data << " ";
        last = a;
        a = a->next;
    }
    cout << endl;
    cout << "Iterate from back : ";
    while(last != NULL){
        cout << last->data << " ";
        last = last->prev;
    }
    cout << endl;
}

Node* GetInput(int size){
    Node *head = NULL,*temp;
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

Node* sortedInsert(Node* head, int data) {
    while(head != NULL){
        if(head->data <= data <= (head->next)->data){
            Node*
        }
    }
}


int main(){
    int size;
    cin >> size;
    Node *head;
    head = GetInput(size);
    printList(head);
    return 0;
}