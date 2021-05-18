#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
}; 

void printList(struct Node *a){
    cout << "List : ";
    while(a != NULL){
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}

Node* GetInput(int size){
    struct Node *temp,*head = NULL;
    for(int i = 0; i < size; i++){
        struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
        int data;
        cin >> data;
        new_node->data = data;
        if(head == NULL){
            head = new_node;
            temp = head;   
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp->next = NULL;
    return head;
}
struct Node* addNode(struct Node *head,int data){
    struct Node* temp = head;
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node*));
    if(head == NULL){
        return newnode;
    }else{
        while(temp != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    
}


int main(){
    struct Node *head = NULL;
    int size;
    cin >> size;
    head = GetInput(size);
    printList(head);
    int data;
    cin >> data;
    head = addNode(head,data);
    return 0;
}