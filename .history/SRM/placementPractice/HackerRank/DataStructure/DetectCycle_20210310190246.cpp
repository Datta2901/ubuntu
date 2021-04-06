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
    temp->next = head;
    return head;
}

bool IsHavingCycle(Node* head){
    // Time complexity is O(n)
    Node *slow = head,*fast = head;
    while(fast->next != NULL || fast->next->next != NULL){
        slow = slow->next;         // moving it to only 1 node
        fast = fast->next->next;  //moving it to 2 nodes 
        if(fast == slow){
            return true;
        }
    }
    return false;
}

int main(){
    struct Node *head = NULL;
    int size;
    cin >> size;
    head = GetInput(size);
    // printList(head);
    
    return 0;
}