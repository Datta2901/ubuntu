#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    vector<int>MyVector;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        MyVector.push_back(a);
        cout << a << " ";
    }
    cout << endl;
    cout << endl;
    for(auto it = MyVector.rbegin(); it != MyVector.rend(); it++){
        cout << *it << " ";
    }

    return 0;
}