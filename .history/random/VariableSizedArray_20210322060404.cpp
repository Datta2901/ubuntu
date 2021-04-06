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

    while(queries--){
        int index,element;
        cin >> index >> element;
        cout << 
        cout << numbers[index][element] << endl;
    }

    return 0;
}