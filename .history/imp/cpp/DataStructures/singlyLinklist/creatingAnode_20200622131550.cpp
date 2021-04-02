#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 
 
Node createNode(Node* n,int data,Node* next){
	 n = new Node();
	 n->data = data;
	 n->next = next;
	 return n;
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
	Node* head ; 
	Node* second ; 
	Node* third; 

	// // allocate 3 nodes in the heap 
	// head = new Node(); 
	// second = new Node(); 
	// third = new Node(); 

	// head->data = 1;
	// head->next = second; 

	// second->data = 2;  
	// second->next = third; 

	// third->data = 3; 
	// third->next = NULL;
	createNode(head,1,second);
	createNode(second,2,third);
	createNode(third,3,NULL); 

	printList(head); 

	return 0; 
} 
