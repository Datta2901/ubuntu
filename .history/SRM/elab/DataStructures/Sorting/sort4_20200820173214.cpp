#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void inSort(int arr[],int n){
    sort(arr,arr+n)
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