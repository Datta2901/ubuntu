#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    int size;
    cin >> size;
    struct node *head == NULL.*temp;
    while(size--){
        struct node *new_node =(struct node*)malloc(sizeof(struct node));
        cin >> new_node->data;
        if(head == NULL){
            head = new_node->next;
            
        }
    }
    return 0;
}