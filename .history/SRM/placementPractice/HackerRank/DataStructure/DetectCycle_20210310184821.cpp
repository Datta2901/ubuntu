#include<bits/stdc++.h>
using namespace std;

int* GetInput(int size){
    for(int i = 0; i < size; i++){
        struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
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
    return head;
}

int main(){
    struct Node *head = NULL;//temp is used to store the address of the present node//head is used to store the address of the first node
    int size;
    cin >> size;
    
    return 0;
}