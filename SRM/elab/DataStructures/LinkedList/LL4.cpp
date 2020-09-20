// Adding the  node before the target node
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int main(){
    int size;
    cin >> size;
    struct Node *temp,*head = NULL,*a = NULL;
    for(int i = 0; i < size; i++){
        int data;
        cin >> data;
        struct Node *new_Node = (struct Node*)malloc(sizeof(struct Node));
        new_Node->data = data;
        if(head == NULL){
            head =  new_Node;
            temp = head;
        }else{
            temp->next = new_Node;
            temp = new_Node;
        }
    }
    // printList(head);
    if(size != 0)
    temp->next = NULL;
    temp = head;
    bool flag = true;
        int target,tar;
        cin >> target >> tar;
        while(temp != NULL){
            if(target == temp->data){
                flag = false;
                struct Node *nn = (struct Node*)malloc(sizeof(struct Node));
                nn->data = tar;
                if(a == NULL){
                    head = nn;
                }else{
                    a->next = nn;
                }
                nn->next = temp;   
                break;
            }
            a = temp;
            temp = temp->next;
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