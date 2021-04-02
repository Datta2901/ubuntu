#include<bits/stdc++.h>
using namespace std;

void showlist(list <int> g) { 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

int main(){
    list<int> linklist;
    list<int> :: iterator it;

    int size;
    cout << "Enter the size of linkedlist";
    cin >> size;
    for(int i = 1 ;i < size; i++){
        linklist.push_back(i);     //adds the element at the back 
        linklist.push_front(i);   //adds the element at the front
    }
    int b = linklist.front();  //gives the first element of the list
    cout << " the first element  of the list is " << b << endl;
    int c = linklist.back();     // gives the last element of the list
    cout << " Last element of the list is " << c << endl;
    showlist(linklist);
    linklist.pop_front();       //removes the first element
    cout << "After removing the front element ----------------"<< endl;
    showlist(linklist);
    linklist.pop_back();        //removes the last element  
    cout << "After removing the last element ----------------"<< endl;
    showlist(linklist);
    linklist.sort();            //sort the list 
    cout << "After  the sorting the list ----------------"<< endl;          
    showlist(linklist);
    linklist.reverse();         //reverse the all the elements in a list
    cout << "After  the reversing the list ----------------"<< endl;
    showlist(linklist);
    int a = linklist.empty();           // says whether the list is empty or not if true 1 else 0
    cout << "says whether list is empty or not @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl; 
    cout << a  << endl;
    showlist(linklist);
    //linklist.insert()
    c = linklist.size();
    cout << " The size of the linkedlist is "  << c << endl;
    linklist.unique();     //removes the duplicates of consecutive characters
    showlist(linklist);
    // linklist.clear()        clear all thr elements


/*list max_size() function in C++ STL– Returns the maximum number of elements a list container can hold.
list unique() in C++ STL– Removes all duplicate consecutive elements from the list.
list::emplace_front() and list::emplace_back() in C++ STL– emplace_front() function is used to insert a new element into the list container, the new element is added to the beginning of the list. emplace_back() function is used to insert a new element into the list container, the new element is added to the end of the list.
list::clear() in C++ STL– clear() function is used to remove all the elements of the list container, thus making it size 0.
list::operator= in C++ STL– This operator is used to assign new contents to the container by replacing the existing contents.
list::swap() in C++ STL– This function is used to swap the contents of one list with another list of same type and size.
list splice() function in C++ STL– Used to transfer elements from one list to another.
list merge() function in C++ STL– Merges two sorted lists into one
list emplace() function in C++ STL– Extends list by inserting new element at a given position.

} 
