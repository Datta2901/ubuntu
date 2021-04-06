#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

    
void printList(struct node* a){
    cout << "Linked List : ";
    while(a != NULL){
        cout <<"->" <<  a->data;
        a = a->next;
    }
}

int main(){
    int size;
    cin >> size;
    struct node *temp,*head = NULL;
    for(int i = 0; i < size; i++){
        int data;
        cin >> data;
        struct node *new_node = (struct node*)malloc(sizeof(struct node));
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
    bool flag = true;
    for(int i = 0; i < 2; i++,temp = head){
        int target;
        cin >> target;
        while(temp != NULL){
            if(target == temp->data){
                break;
            }
        } 
        if(temp == NULL){
            cout << "Node not found!"
        }
    }
    printList(head);
    return 0;
}