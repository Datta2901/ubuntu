// reverse the list
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

void printList(struct node *a,int index){
    cout << "Linked list : ";
    int count = 0,value = 0;
    while(a != NULL){
        count++;
        cout << "-->" << a->data;
        if(count == index){
            value = a->data;
        }
        a = a->next;
    }
    cout << endl;
  	if(value > 0){
    	cout << "Node at index=" << index << " : " << value << endl;
    }else{
    	 cout << "Invalid Index!"<< endl;
    }
}

void push(struct node** next_address,int data){
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = (*next_address);
    *next_address = new_node;  
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
    int index;
    cin >> index;
    printList(head,index);
}
