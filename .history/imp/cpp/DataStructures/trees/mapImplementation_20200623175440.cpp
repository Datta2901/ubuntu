#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> Node;
    int a,b;
    for(int i = 0; i < 4; i++){
        cin >> a >> b; // it reprsent they are parent or child
        Node[a] = b;
    }
    for(auto c : Node){
        cout << *c << " " << Node[*c] << endl;
    }
    return 0;
}