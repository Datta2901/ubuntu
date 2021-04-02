// reverse the list
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

void printList(struct node *a){
    cout << "List : ";
    while(a != NULL){
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}

void push(struct node** next_address,int data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = (*next_address);
    *next_address = new_node;  
}

int main(){
    int size;
    cin >> size;
    struct node* head = NULL,*a;
    for(int i = 0; i < size; i++){
        int data;
        cin >> data;
        if(i == 1){
            a = head;
        }
        push(&head,data);
    }
    printList(head);
    printList(a)
}
