Priority queues are a type of container adapters, specifically designed such that the first element of the queue is the greatest of all elements in the queue and elements are in non increasing order(hence we can see that each element of the queue has a priority{fixed order}).


// priority_queue::empty() in C++ STL– empty() function returns whether the queue is empty.
// priority_queue::size() in C++ STL– size() function returns the size of the queue.
// priority_queue::top() in C++ STL– Returns a reference to the top most element of the queue
// priority_queue::push() in C++ STL– push(g) function adds the element ‘g’ at the end of the queue.
// priority_queue::pop() in C++ STL– pop() function deletes the first element of the queue.
// priority_queue::swap() in C++ STL– This function is used to swap the contents of one priority queue with another priority queue of same type and size.


#include<bits/stdc++.h>
using namespace std;


void PrintQue(priority_queue<int> a){

    while(!a.empty()){            // checks the priority queue is empty or not
        cout << a.top() << " " ; // top function used to get the top element or the largest element upto know
        a.pop();                // removes the first element of the list
    }
    cout << endl;
}

int main(){
    priority_queue<int> answer;
                        //here push function is used to add the element in a prio_que
    answer.push(1);
    answer.push(30);
    answer.push(100);
    answer.push(120);
    cout << "The size of the priority queue is : " << answer.size() << endl;
    cout << "The elements in the priority queue are  ";
    PrintQue(answer);
    answer.emplace(0);
    PrintQue(answer);

    return 0;
}