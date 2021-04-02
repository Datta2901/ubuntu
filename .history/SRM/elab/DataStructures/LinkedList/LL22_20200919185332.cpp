// searching in linked list
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void printList(struct Node *a){
    cout << "List : ";
    while(a != NULL){
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}

int main(){
    int size;
    cin >> size;
    struct node *temp,*head = NULL,*a = NULL;
    for(int i = 0; i < size; i++){
        int data;
        cin >> data;
        struct node* new_node =(struct node*)malloc(sizeof(struct node));
        new_node->data = data;
        if(head == NULL){
            head =  new_node;
            temp = head;
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp->next = NULL;
    temp = head;
    printList(head);
    return 0;
}