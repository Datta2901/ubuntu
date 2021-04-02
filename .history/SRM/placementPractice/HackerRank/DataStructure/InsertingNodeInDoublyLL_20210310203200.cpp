#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next = NULL;
    struct Node* prev = NULL;
};

void printList(struct Node *a){
    cout << "List : ";
    while(a != NULL){
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
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
            Node *cur;
            cur->next = temp->next;
            temp->next = newnode->prev;
            newnode->prev = cur->next;
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