#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int>v;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < size; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}