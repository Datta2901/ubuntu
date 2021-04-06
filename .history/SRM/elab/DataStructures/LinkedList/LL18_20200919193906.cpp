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
    struct node *head = NULL,*temp = NULL,*head2 = NULL;
    while(size--){
        struct node *new_node = (struct node*)malloc(sizeof(struct node));
        int data;
        cin >> data;
        new_node->data = data;
         
    }

    return 0;
}