#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class C1{
    public:
        int length,breadth;
        void get(){
            cin >> length >> breadth;
        }
};

class C2:public C1{
    public:
        void perimeter(){
            cout << 2 *(length + breadth) << endl;
        }
}

int main(){
    C2 obj
    return 0;
}