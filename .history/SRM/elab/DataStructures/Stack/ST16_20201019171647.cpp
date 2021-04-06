#include<bits/stdc++.h>
using namespace std;
 struct tNode1{
   int data;
    struct tNode1* left;
    struct tNode1* right;
    tNode1 (int data){
        this->data = data;
        left = right = NULL;
    }
};
 

void inOrder(struct tNode1 *root){
    stack<tNode1 *> s;
    tNode1 *curr = root;
 
    while (curr != NULL || s.empty() == false){
       
        while (curr !=  NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
 
    }
}
 

int main(){   
    int i,j,k,l,m;
    cin>>i>>j>>k>>l>>m;
    struct tNode1 *root = new tNode1(i);
    root->left        = new tNode1(j);
    root->right       = new tNode1(k);
    root->left->left  = new tNode1(l);
    root->left->right = new tNode1(m);
    inOrder(root);
    return 0;
} 