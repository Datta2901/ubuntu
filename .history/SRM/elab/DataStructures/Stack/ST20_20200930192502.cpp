#include<bits/stdc++.h>
using namespace std;
int RightChild(int node){
    return (2 *node) + 1;
}

int LeftChild(int node){
    return (2 * node);
}
int main(){
    int num;
    cin >> num;
    vector<int>arr;
    for(int i = 0; i < 7; i++){
        arr.push_back(num + i);
    }
    stack<int>a;
    int j = 0;
    for(int i = 0; i < 7; i++){
        while(j < arr.size()){
            j = LeftChild()
        }
    }
    
    return 0;
}