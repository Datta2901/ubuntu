// searching in linked list
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

int main(){
    int size;
    cin >> size;
    struct node *temp,*head = NULL,*a = NULL;
    for(int i = 0; i < size; i++){
        int data;
        cin >> data;
        struct node* new_node =(struct node*)malloc(sizeof(struct node));
        new_node->data = data;
        if(head == NULL){
            head =  new_node;
            temp = head;
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    if(size != 0)
    temp->next = NULL;
    temp = head;
    bool flag = true;
        int target;
        cin >> target;
        while(temp != NULL){
            if(target == temp->data){
                flag = false;
                cout << "Yes\n";
                break;
            }
            temp = temp->next;
        }
        if(flag){
            cout << "No" << endl;
        } 
    return 0;
}