#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void printList(struct node *a,int size){
    int middle,count = 0;
    cout << "List : ";
    while(a != NULL){
        count = count + 1;
        if(size = 2 * count){
            middle = a->data;
        }
        cout << "-->"<< a->data ;
        a = a->next;
    }
    cout << endl;
    cout << "The middle element is [" << middle << "]" << endl;
}

int main(){
    int size;
    cin >> size;
    int b = size;
    struct node *head = NULL;
    while(size--){
        struct node *new_node = (struct node*)malloc(sizeof(new_node));
        int data;
        cin >> data;
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }
    printList(head,b);
    return 0;
}