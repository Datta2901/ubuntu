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
    pop_

} 
