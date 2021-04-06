SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
     SinglyLinkedListNode *answer = NULL,*temp;
    while(head1 || head2){
        if(answer == NULL){
            if(head1->data < head2->data){
                SinglyLinkedListNode* newnode = malloc(sizeof(SinglyLinkedListNode);
                newnode->data = head1->data;
                answer = newnode;
                temp = answer;
                head1 = head1->next;
            }else if(head1->data >= head2->data){
                SinglyLinkedListNode* newnode = malloc(sizeof(SinglyLinkedListNode);
                newnode->data = head2->data;
                answer = newnode;
                temp = answer;
                head2 = head2->next;
            }
        }
        if(head1 && head2){
            if(head1->data < head2->data){
                SinglyLinkedListNode* newnode = malloc(sizeof(SinglyLinkedListNode);
                newnode->data = head1->data;
                head1 = head1->next;
                temp->next = newnode;
                temp = newnode;
            }else{
                SinglyLinkedListNode* newnode = SinglyLinkedListNode();
                newnode->data = head2->data;
                head2 = head2->next;
                temp->next = newnode;
                temp = newnode;
            }
        }else if(head1){
            while(head1 != NULL){
                SinglyLinkedListNode* newnode = malloc(sizeof(SinglyLinkedListNode);
                newnode->data = head1->data;
                head1 = head1->next;
                temp->next = newnode;
                temp = newnode;
            }
        }else if(head2){
            while(head2 != NULL){
                SinglyLinkedListNode* newnode = SinglyLinkedListNode();
                newnode->data = head2->data;
                head2 = head2->next;
                temp->next = newnode;
                temp = newnode;
            }
        }
    }
    
    temp->next = NULL;
    return answer;
}