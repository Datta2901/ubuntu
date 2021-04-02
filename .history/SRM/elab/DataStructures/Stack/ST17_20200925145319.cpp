#include<bits/stdc++.h>
using namespace std;

struct Node1{
    int data;
    struct Node1 *next;
};

void push(struct Node1 **next,int data){
    struct Node1 *new_node = (struct Node1*)malloc(sizeof(struct Node1));
    new_node->data = data;
    new_node->next = *ne

}


int main(){
    int size;
    cin >> size;
    return 0;
}