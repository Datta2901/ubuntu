#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node 1 2 3 {
    int data;
    struct node *next;
};

int main(){
    int size;
    cin >> size;
    struct node *head =NULL,*temp;
    while(size--){
        struct node *new_node = (struct node*)malloc(sizeof(struct node));
        cin >> new_node->data;
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
    int target;
    cin >> target;
    while(temp != NULL){
        if(target == temp->data){
            struct node *nn = (struct node*)malloc(sizeof(struct node));
            nn->data = target;
            temp->next = nn;
            nn->next = a;
        }
        temp = temp->next;
        a = temp;
    }
    if(flag){
            cout << "Node not found!" << endl;
        } 
        cout << "Linked List : ";
    while(head != NULL){
        cout <<"->" <<  head->data;
        head = head->next;
    }
    return 0;
}