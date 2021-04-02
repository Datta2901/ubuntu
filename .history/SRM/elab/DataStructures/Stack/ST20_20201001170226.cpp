// post order traversal using 2 stacks
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
    stack<int>S1,S2;
    S1.push(arr[0]);
    int i = 1;
    while(!S1.empty()){
        S2.push(S1.top());
        S1.pop();
        if(LeftChild(i))

    }
    
    return 0;
}


