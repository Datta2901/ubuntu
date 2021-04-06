#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<string> name;

int query(string s){
    find(name.begin(),name.end(),s);
}

int main(){
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        string s;
        cin >> s;
        name.push_back(s);
    }
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << query(s) << endl;
    }

    return 0;
}