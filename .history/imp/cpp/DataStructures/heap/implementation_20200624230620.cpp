#include<bits/stdc++.h>
using namespace std;

int Parent(int i){
    return i/2;
}

int LeftChild(int i){
    return 2 * i + 1;
}

int RightChild(int i){
    return 2 * i + 2;
}

pair<int,int> swap (int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return pair<int,int> (a,b);
}

void ShiftUp(int i,vector<int> H){
    while(i > 0 && H[parent[i]] < H[i]){
        (H[parent[i]],H[i]) = swap(H[parent[i]],H[i]);
        i = parent[i];
    }
}

void ShiftDown(int i,vector<int> H){
    int maxIndex = i;
    int l = LeftChild(i);
    if(l <= H.size() && H(l) > H[maxIndex])
}

int main(){






    return 0;
}