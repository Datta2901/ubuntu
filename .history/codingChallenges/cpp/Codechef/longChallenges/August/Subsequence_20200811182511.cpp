#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<int> data;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            data.push_back(a);
        }
        for(int i = 0; i < size; i++){
            cout << 2 * size - i << " ";
        }
    }
    cout << endl;
}