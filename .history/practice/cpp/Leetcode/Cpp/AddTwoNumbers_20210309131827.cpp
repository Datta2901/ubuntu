#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
};

void printList(struct ListNode *a){
    cout << "List : ";
    while(a != NULL){
        cout << a->val << " ";
        a = a->next;
    }
    cout << endl;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int num1 = 0,num2  = 0,i = 0;
    while(l1 != NULL){
        num1 += (l1->val * pow(10,i)); 
        l1 = l1->next;
        i++;
    }
    i = 0;
    while(l2 != NULL){
        num2 += pow(10,i); 
        l2 = l2->next;
        i++;
    }
    num1 = num1 + num2;
    struct ListNode *head = NULL,*temp;
    while(num1 != 0){
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(ListNode));
        new_node->val = num1 % 10;
        if(head == NULL){
            head = new_node;
            temp = head;   
        }else{
            temp->next = new_node;
            temp = new_node;
        }
        num1 /= 10;
    }
    temp->next = NULL;
    temp = head;
    return head;
    }
};

int main(){
    int size1,size2;
    cin >> size1 >> size2;
    struct ListNode *head1 = NULL,*head2 = NULL,*temp;//temp is used to store the address of the present node//head is used to store the address of the first node
    for(int i = 0; i < size1; i++){
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(ListNode));
        int val;
        cin >> val;
        new_node->val = val;
        if(head1 == NULL){
            head1 = new_node;
            temp = head1;    //to store 1st node adress in temp
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp->next = NULL;
    temp = head1;
    printList(head1);
    temp = NULL;
    for(int i = 0; i < size2; i++){
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(ListNode));
        int val;
        cin >> val;
        new_node->val = val;
        if(head2 == NULL){
            head2 = new_node;
            temp = head1;    //to store 1st node adress in temp
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp->next = NULL;
    temp = head2;
    printList(head2);
    Solution obj;
    cout << "Answer "
    printList(obj.addTwoNumbers(head1,head2));
    return 0;
}