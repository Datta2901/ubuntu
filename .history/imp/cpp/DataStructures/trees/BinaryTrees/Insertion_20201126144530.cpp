#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *right;
        Node *left;
        Node(int number){
            data = number;
        }
        
        void insert(int value){
            if(value <= data){
                if(left == NULL){
                    left = new Node(value);
                }else{
                    left->insert(value);
                }
            }
            if(right == NULL){
                right = new Node(value);
            }else{
                right->insert(value);
            }
        }
};

int main(){

}