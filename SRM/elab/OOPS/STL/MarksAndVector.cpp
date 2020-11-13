#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> myvector;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        myvector.push_back(a);
    }
    cout << *min_element(myvector.begin(),myvector.end()) << " " << *max_element(myvector.begin(),myvector.end()) << endl;
    return 0;
}