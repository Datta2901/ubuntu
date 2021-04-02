#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *right;
    node *left;
};

struct node* create(int data){
    struct node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
};

void insert(struct node* &root,int value){
    if(root == NULL){
        root = create(value);
    }else if(root->data < value){
        insert(root->left,value);
    }else{
        insert(root->right,value)
    }
}

int main(){

    return 0;
}