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
    struct node *head = NULL;
    while(size--){
        struct node *new_node = (struct node*)malloc(sizeof(new_node));
        int data;
        cin >> data;
        new_node->data = data;
        head = new_node;
        new_node->next = head;
    }
    printList

    return 0;
}