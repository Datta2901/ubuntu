
#include<bits/stdc++.h>
using namespace std;

struct Stack{

};
int RightChild(int node){
    return (2 *node) + 2;
}

int LeftChild(int node){
    return (2 * node) + 1;
}
int main(){
    int num = 5;
    vector<int>arr;
    for(int i = 0; i < num; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    stack<pair<int,int>>S1,S2;
    S1.push({arr[0],0});
    int i = 0;
    while(!S1.empty()){
        S2.push(S1.top());
        S1.pop();
        i = S2.top().second;
        int left = LeftChild(i),right = RightChild(i);
        if(left < arr.size()){
            S1.push({arr[left],left});
        }if(right < arr.size()){
            S1.push({arr[right],right});
        }
    }

    while(!S2.empty()){
        cout << S2.top().first << " ";
        S2.pop();
    }    
    return 0;
}


