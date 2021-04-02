// implement stack using linked list
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
    cout << "Item popped is "<< a->data << endl;
    delete(a);
    return top;
}
void printMiddleElement(struct MYStack *s,int size){
    int count = 0,middle;
    size = (size % 2 == 0) ? ((size)/2) :(size/2) + 1;
    while(s != NULL){
        count++;
        if(count == size){
            middle = s->data;
        }
        // cout << s->data <<"  ";
        s = s->next;
    }
    cout << "Middle Element is "<< middle <<  endl;
}

int main(){
    int size;
    cin >> size;
    int b = size;
    struct MYStack *top = NULL;
    while(size--){
        int data;
        cin >> data;
        push(&top,data);
    }
    b--;
    top = pop(top);
    top = pop(top);
    b--;
    printMiddleElement(top,b);
    return 0;
}