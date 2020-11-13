#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 struct node
 {
    int data;
    struct node* next;
};


void printList(struct node *s){
    while(s != NULL){
        cout <<" " <<s->data ;
        s = s->next;
    }
    cout << endl;
}

void reverseList(struct node **s){
    struct node *current = *s,*prev =NULL,*next_adress;
    while(current!= NULL){
        next_adress = current->next ;
        current->next = prev;
        prev = current;
        current = next_adress;
    }
    *s = prev;
}

int main(){
    int size;
    cin >> size;
    struct node *head = NULL,*temp = NULL;
    while(size--){
        struct node* new_node =(struct node*) malloc(sizeof(struct node));
        int data;
        cin >> data;
        new_node->data = data;
        if(head == NULL){
            head = new_node;
            temp =head;
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp->next = NULL;
    temp = head;
    cout << "Linked list :";
    printList(temp);

    reverseList(&temp);

    cout << "Reversed Linked list :";
    printList(temp);

    return 0;
}