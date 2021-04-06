#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

    
void printList(struct node* a){
    while(a != NULL){
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