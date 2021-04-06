#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,vector<int>> Node;
    int a,b;
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> a >> b;           // it reprsent they are parent or child
        Node[a].push_back(b);    
    }
    cout << endl;
    for(auto c : Node){
        cout << c.first << " : ";
         for(int d =0; d < (c.second).size(); d++){
             cout << c.second[d] << " ";
         }
         cout << endl;
    }

     for(auto c : Node){
         for(int d =0; d < (c.second).size(); d++){
             if(Node[c.first] == c.second[d] )
         }
         cout << endl;
    }

    return 0;
}