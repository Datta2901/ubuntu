#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void result(int a[],int b[],int n){
    sort(a,a+n);
    int sum = 0;
    for(int  i = 0; i < 2 * n; i++)
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        int arr1[2 * size],arr2[size];
        for(int i = 0; i < size; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < size; i++){
            cin >> arr1[i];
        }
        result(arr1,arr1,size);
    }






    return 0;
}