// //Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
// They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed.
// Double Ended Queues are basically an implementation of the data structure double ended queue. A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. Double ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.

// The functions for deque are same as vector, with an addition of push and pop operations for both front and back.
#include <iostream> 
#include <deque> 

using namespace std; 

void showdq(deque <int> g) 
{ 
	deque <int> :: iterator it; 
	for (it = g.begin(); it != g.end(); ++it) 
		cout << '\t' << *it; 
	cout << '\n'; 
} 

int main() 
{ 
	deque <int> gquiz; 
	gquiz.push_back(10); 
	gquiz.push_front(20); 
	gquiz.push_back(30); 
	gquiz.push_front(15); 
	cout << "The deque gquiz is : "; 
	showdq(gquiz); 

	cout << "\ngquiz.size() : " << gquiz.size(); 
	cout << "\ngquiz.max_size() : " << gquiz.max_size(); 

	cout << "\ngquiz.at(2) : " << gquiz.at(2); 
	cout << "\ngquiz.front() : " << gquiz.front(); 
	cout << "\ngquiz.back() : " << gquiz.back(); 

	cout << "\ngquiz.pop_front() : "; 
	gquiz.pop_front(); 
	showdq(gquiz); 

	cout << "\ngquiz.pop_back() : "; 
	gquiz.pop_back(); 
	showdq(gquiz); 

	return 0; 
} 
