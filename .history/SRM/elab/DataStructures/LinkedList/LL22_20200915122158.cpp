#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void printList(node *a){
    while(a->next != NULL){
        cout << a->data << " ";
        a->next = a->next;
    }
    cout << endl;
}

int main(){
    int size;
    cin >> size;
    struct node *head = NULL,*temp;
    while(size--){
        struct node *new_node =(struct node*)malloc(sizeof(struct node));
        cin >> new_node->data;
        if(head == NULL){
            head = new_node->next;
            temp = head;
            continue;
        }
        temp->next = new_node->next;
        temp = new_node->next;
        if(size == 0){
            temp->next = NULL;
            temp = head;
        }
    }
    printList(head);

    return 0;
}