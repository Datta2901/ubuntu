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


int main(){

    int size;
    cin >> size;
    struct node *head,*temp,;
    for(int i = 0; i < size; i++){
        struct node *new_node= (struct node*)malloc(sizeof(struct node));
        int data;
        cin >> data;
        new_node->data = data;
        if(head == NULL){
            head = new_node;
            temp = head;
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp->next = NULL;
    temp = head;

    int count = 0;
    while(temp != NULL){
        count++;
        if(count == 2){
            break;
        }
        temp = temp->next;
    }
    struct node *inserting_node = (struct node*)malloc(sizeof(struct node));
    int d;
    cin >> d;
    inserting_node->data = d;
    temp = temp->next;
    temp->next = inserting_node;
    inserting_node->next = temp->next;
    temp = head;
    printList(head);
    return 0;
}