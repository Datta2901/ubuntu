#include<bits/stdc++.h>
#include<iostream>
#include<vector>
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
  	vector<int>::iterator itr = MyVector.begin(); 
    for(vector<int>::reverse_iterator it = MyVector.rbegin();it!= MyVector.rend();it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}