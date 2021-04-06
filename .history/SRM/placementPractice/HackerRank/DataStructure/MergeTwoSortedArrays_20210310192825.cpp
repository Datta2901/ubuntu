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

Node* MergeTwoSortedLinkedLists(Node *head1,Node *head2){
    Node *answer = NULL;
    while(head1 || head2){
        if(answer->next == NULL){
            if(head1->data < head2->data){
                Node* newnode = new Node();
                
                answer = newnode;
            }
        }
        if(head1){
            if(head1->data < head2->data){

            }if(head1->data == head2->data){
                head1 = head1->next;
                head2 = head2->next;
            }
        }
    }
}

int main(){
    struct Node *head1 = NULL,*head2 = NULL;
    int size1,size2;
    cin >> size1 >> size2;
    head1 = GetInput(size1);
    head2 = GetInput(size2);
    // printList(head1);
    // printList(head2);
    return 0;
}