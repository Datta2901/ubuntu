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
        }else if(root->data < num){
            insert(root->left,num);
        }else{
            insert(root->right,num);
        }

}

int main(){
    struct node *root = NULL;
    int size;
    cout << "Enter the size of the binary tree\n";
    cin >> size;
    for(int i = 0; i < )

    return 0;
}
