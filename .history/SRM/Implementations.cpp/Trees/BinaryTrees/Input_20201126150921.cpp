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
}

void insert(struct node* &root,int num){
        if(root != NULL){
            root = create(num);
        }
        if(root->data < num){
            insert()
        }

}


int main(){
    struct node *root = NULL;
    root = create(9);
    cout << root->data << endl;
    return 0;
}
