#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 

void addNode(Node* name,int value,Node* after){
	name = new Node();
	name->data = value;
	name->next = after;
}

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

	// allocate 3 nodes in the heap 
	// Node* head = new Node(); 
	// Node* second = new Node(); 
	// Node* third = new Node();


	// head->data = 1;
	// head->next = second; 

	// second->data = 2;  
	// second->next = third; 

	// third->data = 3; 
	// third->next = NULL;
	Node* head;
	Node* second;
	NOde* second;
	addNode(head,14,second);
	addNode(second,2,third)

	printList(head); 

	return 0; 
} 

