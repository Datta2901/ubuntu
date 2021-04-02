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
            cout << size - i + 1 << " ";
        }
    }
    cout << endl;
}

1 2 3 4 5

1,{1,2}.{1,3},{1,4},{1,5},{1,2,3},{1,2,4},{1,2,5},{1,3,4},{1,3,5},{1,4,5},{1,2,3,4},{1,2,3,5},{1,3,4,5},{1,2,4,5},{1,2,3,4,5} - 16

2,{2,3},{2,4},{2,5},{2,3,4},{2,3,5},{2,4,5},{2,3,4,5} - 8

3,{3,4},{3,5},{3,4,5} - 4

4,{4,5} - 2

5   - 1