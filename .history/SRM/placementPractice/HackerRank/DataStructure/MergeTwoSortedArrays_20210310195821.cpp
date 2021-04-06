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
    Node *answer = NULL,*temp;
    while(head1 || head2){
        if(answer == NULL){
            if(head1->data < head2->data){
                Node* newnode = new Node();
                newnode->data = head1->data;
                answer = newnode;
                temp = answer;
                head1 = head1->next;
            }else if(head1->data >= head2->data){
                Node* newnode = new Node();
                newnode->data = head2->data;
                answer = newnode;
                temp = answer;
                head2 = head2->next;
            }
        }
        if(head1 && head2){
            if(head1->data < head2->data){
                Node* newnode = new Node();
                newnode->data = head1->data;
                head1 = head1->next;
                temp->next = newnode;
                temp = newnode;
            }else{
                Node* newnode = new Node();
                newnode->data = head2->data;
                head2 = head2->next;
                temp->next = newnode;
                temp = newnode;
            }
        }
        if()
    }
    temp->next = NULL;
    return answer;
}

int main(){
    struct Node *head1 = NULL,*head2 = NULL,*answer = NULL;
    int size1,size2;
    cin >> size1 >> size2;
    head1 = GetInput(size1);
    head2 = GetInput(size2);
    // printList(head1);
    // printList(head2);
    answer = MergeTwoSortedLinkedLists(head1,head2);
    printList(answer);
    return 0;
}