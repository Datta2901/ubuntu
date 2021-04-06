#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 

void addNode(Node* name,int value){
	name = new Node();
	name->data = value;
	name->next = NULL;
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
	Node()
	
	printList(head); 

	return 0; 
} 

