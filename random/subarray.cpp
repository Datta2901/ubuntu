#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size,k;
    cin >> size >> k;
    vector<int>num,dup;
    set<int>indices;
    int a;
    for(int i = 0; i < size; i++){
        cin >> a;
        num.push_back(a);
    }

    int count = 0;
    for(int j = 0; j < size; j++){
        for(int i = j; i < size; i++){
            if(num[i] > num[j]){
                count++;
                indices.insert(i);
            }
        }
    }
    if(count == 0){
        cout << 0 << endl;
        return;
    }
    for(auto i : indices){
        dup.push_back(i);
    }
    int answer = INT_MIN;
    sort(dup.begin(),dup.end());
    for(int j = 0; j < dup.size(); j++){
        int max = 0;
        for(int i = j; i < dup.size(); i++){
            if(dup[j] > dup[i] && dup[j] - k - 1  < dup[i]){
                max++;
            }
        } 
        if(answer < max){
            answer = max;
        }
    }
    cout << count - answer << endl;
    return 0;
}