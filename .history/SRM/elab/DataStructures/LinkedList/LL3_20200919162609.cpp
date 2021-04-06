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
    struct node *head =NULL,*temp,;
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

    }
    return 0;
}