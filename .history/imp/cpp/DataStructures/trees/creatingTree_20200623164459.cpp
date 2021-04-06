#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int a){
    Node* node = new Node();
    node->data = a;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insertLevelOrder(vector<int> arr,Node* root,int i){
    if(i < arr.size()){
        Node* temp = newNode(arr[i]);
        root->left = insertLevelOrder(arr,root->left,2*i + 1);
        root->right = insertLevelOrder(arr,root)
    }
}

int main(){


    return 0;
}