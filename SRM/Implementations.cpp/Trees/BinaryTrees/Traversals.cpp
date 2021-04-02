// Tree Traversals that is pre post in order traversal for binary trees
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
        insert(root->right,value);
    }
}

// left root right;
void inorder(struct node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//root left right
void preorder(struct node *root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//left right root
void postorder(struct node *root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


int main(){
    struct node* root = NULL;
    int size;
    cout << "Enter the size of the binary Search tree\n";
    cin >> size;
    for(int i = 0; i < size; i++){
        int value;
        cin >> value;
        insert(root,value);
    }
    int control;
    cout << "1 ---> Inorder traversal\n";
    cout << "2 ---> Preorder traversal\n";
    cout << "3 ----> Postorder traversal\n";
    cin >> control;
    if(control == 1){
        inorder(root);
    }else if(control == 2){
        preorder(root);
    }else if(control == 3){
        postorder(root);
    }else{
        cout << "Enter a valid option\n";
    }
    cout << endl;

    return 0;
}