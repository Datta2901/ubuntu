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
    struct node *head;
    while(size--){
        struct node *new_node =(struct node*)malloc(sizeof(struct node));
        cin >> new_node->data;
    }
    return 0;
}