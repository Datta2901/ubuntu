#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

int main(){
    int size;
    cin >> size;
    struct node *head = NULL,*temp = nullptr;
    while(size--){
        struct node *new_node = (struct node*)malloc(sizeof(struct node));
        int data;
        cin >> data;
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }

    return 0;
}