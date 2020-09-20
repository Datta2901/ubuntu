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


int main(){
    struct Node *head = NULL,*temp;//temp is used to store the address of the present node//head is used to store the address of the first node
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
        int data;
        cin >> data;
        new_node->data = data;
        if(head == NULL){
            head = new_node;
            temp = head;    //to store 1st node adress in temp
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp->next = NULL;
    temp = head;
    printList(head);
}
