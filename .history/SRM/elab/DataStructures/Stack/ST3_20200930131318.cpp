#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct MYStack{
    int data;
    struct MYStack* next;
};

void push(struct MYStack**top,int data){
    struct MYStack *createMyStack = (struct MYStack*)malloc(sizeof(struct MYStack));
    createMyStack->data = data;
    createMyStack->next = *top;
    *top = createMyStack;
}
struct MYStack* pop(struct MYStack *top){
    struct MYStack *a;
    a = top;
    top = top->next;
    a->next = NULL;
    cout << "Item poped is "<< a->data << endl;
    delete(a);
    return top;
}

int main(){
    int size;
    cin >> size;
    struct MYStack *top = NULL;
    while(size--){
        int data;
        cin >> data;
        push(&top,data);
    }
    top = pop(top);
    top = pop(top);
    printStack(top);
    return 0;
}