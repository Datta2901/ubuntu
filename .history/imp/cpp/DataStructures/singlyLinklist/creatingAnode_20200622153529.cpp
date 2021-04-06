// normal implementation of linklist
#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 

void printList(Node* n) 
{ 
	while (n != NULL) { 
		cout << n->data << " "; 
		n = n->next; 
	}
	cout << endl; 
} 

pair<bool,int> search(Node* n,int key){
	int count = 1;
	while(n != NULL){
		
		if(n->data == key){
			return pair<bool,int>(true,count);
		}
		count++;
		n = n->next; 
	}
	return pair<bool,int>(false,0);
}

int main() 
{ 
	Node* head   = new Node(); 
	Node* second = new Node(); 
	Node* third  = new Node(); 

	head->data = 1;
	head->next = second; 

	second->data = 2;  
	second->next = third; 

	third->data = 3; 
	third->next = NULL;

	//inserting a node at the front

	Node* first = new Node();
	first->data = 4;
	first->next = head;

	// inserting node between head and second
	Node* fourth = new Node();
	fourth->data = 5;
	fourth->next = second;
	head->next = fourth;

	// inserting node at last
	Node* last = new Node();
	last->data = 6;
	last->next = NULL;
	third->next = last;

	//delete the firt node
	first->next = NULL;

	//delete the last node
	third->next = NULL;

	//delete the middle element second

	fourth->next = third;
	second->next = NULL;


	printList(head);

	cout << "Enter a element in linklist " << endl;
	int ele;
	cin >> ele;
	pair<bool,int> answer = search(head,ele);
	if(answer.){
		cout << "The given element if found in the given list " << endl;
	}else{
		cout << " The element is not found int he list " << endl;
	}
	
	return 0; 
} 

