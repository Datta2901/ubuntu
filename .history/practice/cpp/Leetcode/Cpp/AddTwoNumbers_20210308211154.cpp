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
        ListNode* cur = l1;
        while(l1->next != NULL){
            num1 += (l1->val * pow(10,i)); 
            l1 = l1->next;
            i++;
        }
        i = 0;
        while(l2->next != NULL){
            num2 += pow(10,i); 
            l2 = l2->next;
            i++;
        }
        num1 = num1 + num2;
        ListNode* temp;
        while(cur->next != NULL){
            l1->val = num1 % 10;
            num1 /= 10;
            l1 = l1->next;
            temp = l1;
        }
        if(num1 != 0){
            ListNode* current = (ListNode *)malloc(sizeof(ListNode));
            current->val = num1 % 10;
            temp->next = current;
            temp = current;
            num1 /= 10;
        }
        return l1;
    }
};

int main(){
    int size;
    cin >> size;
    struct ListNode *head = NULL,*temp;//temp is used to store the address of the present node//head is used to store the address of the first node
    for(int i = 0; i < size; i++){
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(ListNode));
        int val;
        cin >> val;
        new_node->val = val;
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
    Solution obj;
    printList(obj.addTwoNumbers(head,head));
    cout << 2 * pow(10,0) << 3 *
    return 0;
}