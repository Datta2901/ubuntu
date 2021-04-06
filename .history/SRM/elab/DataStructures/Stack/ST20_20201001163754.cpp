#include<bits/stdc++.h>
using namespace std;
int RightChild(int node){
    return (2 *node) + 1;
}

int LeftChild(int node){
    return (2 * node);
}
int main(){
    int num;
    cin >> num;
    vector<int>arr;
    for(int i = 0; i < 7; i++){
        arr.push_back(num + i);
    }
    stack<int>a;
    int j = 0;
    for(int i = 0; i < 7; i++){
        j = i;
        while(j < arr.size()){
            j = LeftChild(j);

        }
    }
    
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

// Maximum stack size
#define MAX_SIZE 100

// A tree node
struct Node
{
 int data;
 struct Node *left, *right;
};

// Stack type
struct Stack
{
 int size;
 int top;
 struct Node* *array;
};

// A utility function to create a new tree node
struct Node* newNode(int data)
{
 struct Node* node = (struct Node*) malloc(sizeof(struct Node));
 node->data = data;
 node->left = node->right = NULL;
 return node;
}

// A utility function to create a stack of given size
struct Stack* createStack(int size)
{
 struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
 stack->size = size;
 stack->top = -1;
 stack->array = (struct Node**) malloc(stack->size * sizeof(struct Node*));
 return stack;
}

// BASIC OPERATIONS OF STACK
int isFull(struct Stack* stack)
{ return stack->top - 1 == stack->size; }

int isEmpty(struct Stack* stack)
{ return stack->top == -1; }

void push(struct Stack* stack, struct Node* node)
{
 if (isFull(stack))
  return;
 stack->array[++stack->top] = node;
}

struct Node* pop(struct Stack* stack)
{
 if (isEmpty(stack))
  return NULL;
 return stack->array[stack->top--];
}

struct Node* peek(struct Stack* stack)
{
 if (isEmpty(stack))
  return NULL;
 return stack->array[stack->top];
}

// An iterative function to do postorder traversal of a given binary tree
void postOrderIterative(struct Node* root)
{
 // Check for empty tree
 if (root == NULL)
  return;
 
 struct Stack* stack = createStack(MAX_SIZE);
 do
 {
  // Move to leftmost node
  while (root)
  {
   // Push root's right child and then root to stack.
   if (root->right)
    push(stack, root->right);
   push(stack, root);

   // Set root as root's left child
   root = root->left;
  }

  // Pop an item from stack and set it as root 
  root = pop(stack);

  // If the popped item has a right child and the right child is not
  // processed yet, then make sure right child is processed before root
  if (root->right && peek(stack) == root->right)
  {
   pop(stack); // remove right child from stack
   push(stack, root); // push root back to stack
   root = root->right; // change root so that the right
        // child is processed next
  }
  else // Else print root's data and set root as NULL
  {
   printf("%d ", root->data);
   root = NULL;
  }
 } while (!isEmpty(stack));
}

// Driver program to test above functions
int main()
{
 struct Node* root = NULL;
   int x;
    scanf("%d",&x);
 root = newNode(x);
 root->left = newNode(x+1);
 root->right = newNode(x+2);
 root->left->left = newNode(x+3);
 root->left->right = newNode(x+4);
 root->right->left = newNode(x+5);
 root->right->right = newNode(x+6);
 printf("Post order traversal of binary tree is :\n");
 printf("[");
 postOrderIterative(root);
 printf("]");
 

 return 0;
}