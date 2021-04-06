#include<bits/stdc++.h>
#include<iostream>
using namespace std;
float findSum(int A[],int N){
    return ((N))/ A[0];
}

int main(){
    int size,sum = 0;
    cin >> size;
    int arr[size];
    arr[0] = size;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        sum += a;
    }
    int a = findSum(arr,sum);
    printf("%.2f",a);
    return 0;
}