#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node123 {
    int data;
    struct node123 *next;
};

int main(){
    int size;
    cin >> size;
    struct node123 *head =NULL,*temp,*a = NULL ,4*b;
    while(size--){
        struct node123 *new_node = (struct node123*)malloc(sizeof(struct node123));
        int data;
        cin >> data;
        new_node->data = data;
        if(head == NULL){
            head = new_node;
            temp = head;
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp->next = NULL;
    temp = head;
    int target,tar;
    cin >> target >> tar;
    bool flag = true;
    while(temp != NULL){
        if(target == temp->data){
            struct node123 *nn = (struct node123*)malloc(sizeof(struct node123));
            nn->data = tar;
            temp->next = nn;
            nn->next = a;
            flag = false;
            break;
        }
        temp = temp->next;
        b = temp;
        a = b->next;
    }
    if(flag){
        cout << "Node not found!" << endl;
    } 
    cout << "Linked List : ";
    while(head != NULL){
        cout <<"->" <<  head->data;
        head = head->next;
    }
    return 0;
}