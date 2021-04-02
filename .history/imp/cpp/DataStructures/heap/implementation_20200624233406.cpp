#include<bits/stdc++.h>
using namespace std;

int parent(int i){
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
    while(i > 0 && H[parent(i)] < H[i]){
        pair<int,int> (H[parent(i)],H[i]) = swap(H[parent(i)],H[i]);
        i = parent(i);
    }
}

void ShiftDown(int i,vector<int> H){
    int maxIndex = i;
    int l = LeftChild(i);
    if(l <= H.size() && H[l] > H[maxIndex]){
        maxIndex = l;
    }
    int r = RightChild(i);
    if(r <= H.size() && H[r] > H[maxIndex]){
        maxIndex = r;
    }
    if(i != maxIndex){
        pair<int,int>(H[i],H[maxIndex]) = swap(H[i],H[maxIndex]);
        ShiftDown(maxIndex,H);
    }
}

void Insert(int p,int maxSize,vector<int> H){
    if(H.size() == maxSize){
        return;
    }
    int size = H.size() + 1;
    H[size - 1] = p;
    ShiftUp(size,H);
}

int ExtractMax(vector<int> H){
    int result = H[0];
    H[0] = H[H.size() - 1];
    int size = H.size() - 1;
    ShiftDown(0,H);
    return result;
}

void Remove(int i,vector<int> H){
    H[i] =INT_MAX ;
    ShiftUp(i,H);
    ExtractMax(H);
}

void ChangePriority(int p,int i,vector<int> H){
    int oldp = H[i];
    H[i] = p;
    if(p > oldp){
        ShiftUp(i,H);
    }else{
        ShiftDown(i,H);
    }
}

int main(){

    vector<int> H = {12,10,34,45};
    ChangePriority(45,4,H);
    cout << ExtractMax(H) << endl;





    return 0;
}