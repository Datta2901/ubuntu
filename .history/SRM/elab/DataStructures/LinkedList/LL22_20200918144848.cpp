#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void printList(struct node *a){
    while(a->next != NULL){
        cout << a->data << " ";
        a->next = a->next;
    }
    cout << endl;
}
