#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> rotateLeft(int d, vector<int>& arr) {
    d = d % arr.size();
    for(int i = 0; i < d; i++){
        int temp = arr[0];
        arr.erase(arr.begin());
        arr.insert(arr.end(),temp);

    }
    return arr;
}

vector<int> rotateLeft(int d, vector<int> arr) {
    long long int n =arr.size();
    vector<int>res;
    for(int i=d;i<n;i++){
        res.push_back(arr[i]);
    }
    for(int i=0;i<d;i++){
        res.push_back(arr[i]);
    }
    return res;
}


int main(){
    int size,d;
    cin >> size >> d;
    vector<int>arr;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    rotateLeft(d,arr);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}