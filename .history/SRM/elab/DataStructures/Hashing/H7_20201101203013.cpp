#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size,value;
    cin >> size >> value;
    unordered_map<int,int>fre;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        fre[a]++;
    }
    bool flag = true;
    for(auto it = fre.begin(); it != fre.end(); it++){
        if(fre[value - it->first] > 0 && (value - it->first) != it->first){
            cout << "YES\n";
            flag = 
            break;
        }
    }
    return 0;
}