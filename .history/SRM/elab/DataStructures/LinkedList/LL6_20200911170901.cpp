#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    int size;
    cin >> size;
    node * arr[size];
    node* arr[0] = new node();
    arr[0]->next = NULL;
    for(int i = 1; i < size; i++){
        int a;
        cin >> a;
        node* arr[i] = new node();
        arr[i]->data = a;
        arr[i]->
    }
    return 0;
}