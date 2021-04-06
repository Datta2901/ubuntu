#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void printList(ode* n) 
{ 
	while (n != NULL) { 
		cout << n->data << " "; 
		n = n->next; 
	}
	cout << endl; 
}

int main(){
    int size;
    cin >> size;
    node * arr[size];
    node* arr[0] = new node();
    arr[0]->next = NULL;
    for(int i = 1; i < size; i++){
        int a;
        cin >> a;
        node* arr[i] = new node();
        arr[i]->data = a;
        arr[i]->next = arr[i - 1];
    }

    return 0;
}