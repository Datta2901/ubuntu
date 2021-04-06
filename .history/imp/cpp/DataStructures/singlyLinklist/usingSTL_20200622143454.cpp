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
    showlist(linklist);
    int a = linklist.empty();           // says whether the list is empty or not if true 1 else 0
    cout << a  << endl;
    showlist(linklist);
} 
