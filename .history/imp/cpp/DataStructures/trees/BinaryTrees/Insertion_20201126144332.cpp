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
        
        void insert(int data){
            if(left == NULL){
                left = new Node(data);
            }else{
                left->insert(data);
            }

            if(right == NULL)

        }
};

int main(){

}