#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    set<int>s;
    int size;
    cin >> size;
    int a = size;
     set<int>:: iterator it;
    for(int i = 0; i < size; i++){
        int b;
        cin >> b;
        s.insert(b);
    }
    int c;
    cin >> c;
    if(s.find(c) != s.end()){
        cout << "Element "<< c <<  " found in the set\n";
    }else{
        cout << "No Element Found\n";
    }
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " "; 
    }
    cout << endl;
    cout << "Size="<< size << endl;
    return 0;
}

