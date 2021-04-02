#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<vector<int>> numbers;
    int size,queries;
    cin >> size >> queries;
    for(int i = 0; i < size; i++){
        int s;
        cin >> s;
        for(int j = 0; j < s; j++){
            int a;
            cin >> a;
            numbers[i].push_back(a);
        }
    }

    // for(auto i : numbers){
    //     for(auto j : i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }   

    while(queries--){
        int index,element;
        cin >> index >> element;
        cout << numbers[index][element] << endl;
    }

    return 0;
}