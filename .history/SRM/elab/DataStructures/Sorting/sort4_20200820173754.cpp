#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void nSort(int arr[],int n){
    sort(arr,arr+n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Sorted Array:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    inSort(arr,size);
    return 0;
}