// A C# program to introduce Binary Tree 
#include<bits/stdc++.h>

/* Class containing left and right child 
of current node and key value*/
class Node 
{ 
    public:
	int key; 
 Node left, right; 

	public Node(int item) 
	{ 
		key = item; 
		left = right = null; 
	} 
} 

public class BinaryTree 
{ 
	// Root of Binary Tree 
	Node root; 

	// Constructors 
	BinaryTree(int key) 
	{ 
		root = new Node(key); 
	} 

	BinaryTree() 
	{ 
		root = null; 
	} 

	// Driver Code 
	public static void Main(String[] args) 
	{ 
		BinaryTree tree = new BinaryTree(); 

		/*create root*/
		tree.root = new Node(1); 

		/* following is the tree after above statement 

			1 
			/ \ 
		null null	 */
		tree.root.left = new Node(2); 
		tree.root.right = new Node(3); 

		/* 2 and 3 become left and right children of 1 
			1 
			/ \ 
			2	 3 
		/ \ / \ 
		null null null null */
		tree.root.left.left = new Node(4); 
		
		/* 4 becomes left child of 2 
					1 
				/	 \ 
			2		 3 
			/ \	 / \ 
			4 null null null 
		/ \ 
		null null 
		*/
	} 
} 

// This code is contributed by PrinciRaj1992 
