#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> numbers;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    auto ip = unique(numbers.begin(),numbers.end());
    numbers.resize(distance(numbers.begin()))
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}