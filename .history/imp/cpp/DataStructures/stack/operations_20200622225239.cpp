//Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and (top) an element is removed from that end only.
// empty() – Returns whether the stack is empty – Time Complexity : O(1)
// size() – Returns the size of the stack – Time Complexity : O(1)
// top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
// push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
// pop() – Deletes the top most element of the stack – Time Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> answer;  // initialisation 
    answer.push(10);   //adds the element
    cout << "Is stack empty "<<answer.empty() << endl; // gives the list empty or not
    answer.push(20);
    cout << "size of the stack " << answer.size() << endl; // gives the size
    cout << "We can only access top element "<<answer.top() << endl;
    answer.pop();
    cout << "Top element of the stack is " <<answer.top() << endl;
    cout << "size of the stack is " << answer.size() << endl;

    return 0;
}