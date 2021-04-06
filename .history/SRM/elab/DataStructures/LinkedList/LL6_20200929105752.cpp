// deleted the nodes
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void printList(struct node *a){
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
    struct node *head = NULL,*temp,*a;
    while(size--){
        struct node* new_node =(struct node*)malloc(sizeof(struct node));
        int data;
        cin >> data;
        new_node->data =data;
        if(head == NULL){
            head = new_node;
            temp = new_node;
        }else{
            temp->next = new_node;
            temp = new_node;
        } 
    }
    temp->next = NULL;
    temp =  head;
    int times;
    cin >> times;
    while(times--){
        if(temp!= NULL){
            a = temp->next;
        }
        a->next = temp;
        temp->next = a;
        temp = temp->next;
        a = temp;
       
    }
    temp = head;

    printList(head);

    return 0;
}