#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void inSort(int arr[],int n){
    sort(arr,arr+n);
    cout << "Sorted Array:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        cout << arr[i" "
    }
    inSort(arr,size);
    return 0;
}