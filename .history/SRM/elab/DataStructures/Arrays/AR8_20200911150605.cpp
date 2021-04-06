#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    vector<int> aaa,b;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        b.push_back(a);
    }
    for(int i = 0; i < size; i++){
        if(b[i] % 2 != 0){
            cout <<  << endl;
        }else{
            aaa.push_back(a);
        }
    }
    for(int i = 0; i < aaa.size(); i++){
        cout << aaa[i] << endl;
    }
    return 0;
}