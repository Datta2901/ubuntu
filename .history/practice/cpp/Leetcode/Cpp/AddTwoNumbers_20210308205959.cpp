#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
};



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 0,num2  = 0,i = 0;
        while(l1->next != NULL){
            num1 += pow(10,i); 
            l1 = l1->next;
        }
        i = 0;
        while(l2->next != NULL){
            num2 += pow(10,i); 
            l2 = l2->next;
        }
        num1 = num1 + num2;
        ListNode* temp;
        while(l1->next != NULL){
            l1->val = num1 % 10;
            num1 /= 10;
            l1 = l1->next;
            temp = l1;
        }
        if(num1 != 0){
            ListNode* current = (ListNode *)malloc(sizeof(ListNode));
            current->val = num1 % 10;
            temp->next = current;
            current  = temp;
            num1 /= 10;
        }
        return l1;
    }
};

int main(){
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        struct Li *new_node = (struct Li*)malloc(sizeof(struct Li));
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

    return 0;
}