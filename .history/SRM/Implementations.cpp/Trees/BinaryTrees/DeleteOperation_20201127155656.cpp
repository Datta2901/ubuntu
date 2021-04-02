// Just to take the input of the binary search tree(insertions a node into a binary tree)
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

struct node* create(int data){
    struct node* temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void insert(struct node* &root,int num){
    if(root == NULL){
        root = create(num);
    }else if(root->data < num){
        insert(root->left,num);
    }else{
        insert(root->right,num);
    }
}

void Delete(struct node* &root, int value){
    
}

int main(){
    struct node *root = NULL;
    int size;
    cout << "Enter the size of the binary tree\n";
    cin >> size;
    for(int i = 0; i < size; i++){
        cout << "Enter the value of the node\n";
        int value;
        cin >> value;
        insert(root,value);
    }
    cout<< root->data << endl;;
    return 0;
}
