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
        while(l1->next != NUL)
        return l1;
    }
};

int main(){

    return 0;
}