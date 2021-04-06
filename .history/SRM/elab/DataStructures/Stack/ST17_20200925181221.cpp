#include<bits/stdc++.h>
using namespace std;

struct Node1{
    int data;
    struct Node1 *next;
};

void push(struct Node1 **top,int data){
    struct Node1 *new_node = (struct Node1*)malloc(sizeof(struct Node1));
    new_node->data = data;
    new_node->next = *top;
    *top = new_node;
}

void reverse(struct Node1 *){
    struct Node1 *next_adress,*prev_adress = NULL,*current = *s;
    while(current != NULL){
        next_adress = current->next;
        current->next = prev_adress;    
        prev_adress = current;
        prev_adress = current;
        current = next_adress;
    }  
}

void printStack(struct Node1 *s){
    while(s != NULL){
        cout << s->data <<" ";
        s = s->next;
    }
    cout << endl;
}


int main(){
    int size;
    cin >> size;
    struct Node1 *top = NULL;
    for(int i = 0; i < size; i++){
        int data;
        cin >> data;
        push(&top,data);
    }
    cout << "The sequence of contents in stack" << endl;
    printStack(top);
    reverse(&top);
    cout << "The contents in stack after reversal"<<endl;
    printStack(top);
    return 0;
}