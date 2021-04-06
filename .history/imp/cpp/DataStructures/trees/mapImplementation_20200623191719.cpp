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

    return 0;
}

// 10 40 30 30 20 0 0

    //    =0  0  
    // 10=     20
    //  40      30
    //      30

//  1.1 + last + (last-1)
//  2.    1