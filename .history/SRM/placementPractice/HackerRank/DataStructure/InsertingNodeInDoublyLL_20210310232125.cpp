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

Node* sortedInsert(Node* head, int data){
    Node *temp = head,*last;
    Node* newnode = new Node();
    newnode->data = data;
    bool answer = true;
    while(temp != NULL){
        if(data <= (temp->next)->data && temp->next != NULL){
            temp->next = newnode;
            newnode->prev = temp;
            newn
            temp = newnode;
            last = temp;
            answer = false;
            temp = temp->next;
            break;
        }
    }
    temp = last;
    if(answer){
        temp->next = newnode;
        newnode->prev = last;
        temp = newnode;
    }
    return head;
}


int main(){
    int size;
    cin >> size;
    Node *head;
    head = GetInput(size);
    printList(head);
    int data;
    cin >> data;
    printList(sortedInsert(head,data));
    return 0;
}