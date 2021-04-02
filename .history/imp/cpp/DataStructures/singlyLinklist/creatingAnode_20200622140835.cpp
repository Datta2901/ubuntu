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

	printList(); 

	return 0; 
} 

