#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> linklist;
    list<int> :: iterator it;

    int size;
    cout << "Enter the size of linkedlist";
    cin >> size;
    for(int i = 1 ;i < size; i++){
        linklist.push_back(i);
        linklist.push_front(i);   // 
    }
} 
