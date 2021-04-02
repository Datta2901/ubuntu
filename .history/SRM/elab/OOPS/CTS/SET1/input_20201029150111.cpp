#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    cout << "Marks of the students:";
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        cout << " " << a;
    }
    return 0;
}
//doubly linked list implementation
#include <stdio.h>
#include<stdlib.h>
struct node
{
  struct node *prev;
  int data;
  struct node *next;
};
int
main ()
{
  int n, z;
  scanf ("%d", &n);
  struct node *head = NULL;
  struct node *temp, *newnode;
  while (n--)
    {
      newnode = (struct node *) malloc (sizeof (struct node));
      scanf ("%d", &z);
      newnode->data = z;
      if (head == NULL)
	{
	  newnode->prev = NULL;
	  newnode->next = NULL;
	  head = newnode;
	  temp = head;
	}
      else
	{

	  temp->next = newnode;
	  newnode->prev = temp;
	  temp = newnode;
	  newnode->next = NULL;
	}

    }
  temp = head;
  printf("Marks of the students:");
  while (temp != NULL)
    {
      printf (" %d", temp->data);
      temp = temp->next;
    }




  return 0;
}