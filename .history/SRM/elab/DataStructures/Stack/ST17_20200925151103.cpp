#include<bits/stdc++.h>
using namespace std;

struct Node1{
    int data;
    struct Node1 *next;
};

void push(struct Node1 **next,int data){
    struct Node1 *new_node = (struct Node1*)malloc(sizeof(struct Node1));
    new_node->data = data;
    new_node->next = *next;
    *next = new_node;
}

void printStack(struct Node1 *s){
    if(s != NULL){
        cout << s->data << endl;
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
    cout << "The contents in stack after reversal"<<endl;
    print
    return 0;
}