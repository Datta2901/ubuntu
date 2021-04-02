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
    linklist.clear()



} 
