#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
	int data; 
	Node* next; 
};

class List{
	public:
		Node *head,*tail;
	private:
		List(){
			head = NULL;
			tail = NULL;
		}

};

void createNode(int data){
	Node *
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

	// allocate 3 nodes in the heap 
	head = new Node(); 
	second = new Node(); 
	third = new Node(); 

	head->data = 1;
	head->next = second; 

	second->data = 2;  
	second->next = third; 

	third->data = 3; 
	third->next = NULL;
	
	printList(head); 

	return 0; 
} 

