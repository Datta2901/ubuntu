#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
};


ListNode* GetInput(int size){
    struct ListNode *head1 = NULL,*head2 = NULL,*temp1,*temp2;//temp is used to store the address of the present node//head is used to store the address of the first node
    for(int i = 0; i < size; i++){
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(ListNode));
        int val;
        cin >> val;
        new_node->val = val;
        if(head1 == NULL){
            head1 = new_node;
            temp1 = head1;    //to store 1st node adress in temp
        }else{
            temp1->next = new_node;
            temp1 = new_node;
        }
    }
    temp1->next = NULL;
    temp1 = head1;
    return head1;
}

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
    cout << "num1 "  << num1;
    i = 0;
    while(l2 != NULL){
        num2 += (l2->val * pow(10,i)); 
        l2 = l2->next;
        i++;
    }
    cout<< " num2 " << num2;
    num1 = num1 + num2;
    cout  << " Sum " << num1 << endl
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
    struct ListNode *head1 = NULL,*head2 = NULL;//temp is used to store the address of the present node//head is used to store the address of the first node
    head1 = GetInput(size1);
    head2 = GetInput(size2);
    cout << "1st list is ";
    printList(head1);
    cout << "2nd list is ";
    printList(head2);
    Solution obj;
    cout << "Answer is ";
    printList(obj.addTwoNumbers(head1,head2));
    return 0;
}