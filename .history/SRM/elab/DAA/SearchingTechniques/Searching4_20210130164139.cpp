#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int m;
    cin >> m;
    int sum = 0;
    vector<int> mm;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        mm.push_back(a);
    }
    for(auto x : mm){
        int a;
        cin >> a;
        if(i < m){
            sum += a;
        }
    }
    cout << "Minimum number of pages = " << sum << endl;
    return 0;
}