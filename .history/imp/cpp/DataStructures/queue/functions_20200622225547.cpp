// Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front.
// empty() – Returns whether the queue is empty.
// size() – Returns the size of the queue.
// queue::swap() in C++ STL: Exchange the contents of two queues but the queues must be of same type, although sizes may differ.
// queue::emplace() in C++ STL: Insert a new element into the queue container, the new element is added to the end of the queue.
// queue::front() and queue::back() in C++ STL– front() function returns a reference to the first element of the queue. back() function returns a reference to the last element of the queue.
// push(g) and pop() – push() function adds the element ‘g’ at the end of the queue. pop() function deletes the first element of the queue.
#include<bits/stdc++.h>
using namespace std;
void showq(queue <int> gq) { 
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
}
int main(){
    queue<int> data;
    data.push(10);
    data.push(20);
    data.push(50);
    data.push
    cout << " First element of the queue "<< data.front() << endl;
    cout << "Last element of the queue " << data.back() << endl;
    showq(data);
    data.push(30);
    cout << "queue-->size  " <<  data.size() << endl;
    cout << "is queue is empty " << data.empty() << endl;
    showq(data);
    data.emplace(40);
    data.pop(); // here it delete the first element
    showq(data);


    return 0;
}
