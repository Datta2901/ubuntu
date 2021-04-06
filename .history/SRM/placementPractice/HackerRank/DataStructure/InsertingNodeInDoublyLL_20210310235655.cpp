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

    if(data <= temp->data){
        newnode->next = temp;
        temp->prev = newnode;
        temp = newnode;
        return head;
    }
    
    while(temp != NULL){
        if(data <= (temp->next)->data && temp->next != NULL){
            newnode->next = temp->next;
            newnode->prev = temp;
            temp->next = newnode;
            temp->next->prev = newnode;
            temp = newnode;
            answer =false;
            last = temp;
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

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) 
{
struct DoublyLinkedListNode *temp=head, *last=head;
    DoublyLinkedListNode newnode= (struct DoublyLinkedListNode)malloc(sizeof(struct DoublyLinkedListNode*));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=newnode;
        return head;
    }
    if(data<(temp->data)){
        newnode->next=temp;
        temp->prev=newnode;
        newnode->prev=NULL;
        head=newnode;
        return head;
    }
    while(temp->data<=data){
        last=temp;
        temp=temp->next;
        if(last->next==NULL){
            break;
        }
    }
    if(last->next==NULL){
        newnode->next=last->next;
        newnode->prev=last;
        last->next=newnode;
        return head;
    }else{
        newnode->next=last->next;
        newnode->prev=temp->prev;
        temp->prev=newnode;
        last->next=newnode;
        return head;
    }
    
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