#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void printList(struct node* a){
    while(a->next != NULL){
        cout << a->data << " ";
        a->next = a->next;
    }
    cout << endl;
}

void push(struct node** next_adress,int data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node))
}

int main(){
    int size;
    cin >> size;
    struct node* head = NULL;
    for(int i = 0; i < size; i++){
        int data;
        cin >> data;
        push(&head,data);
    }
}
