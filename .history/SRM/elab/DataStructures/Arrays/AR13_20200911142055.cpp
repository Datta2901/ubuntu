#include<bits/stdc++.h>
#include<iostream>
using namespace std;
float findMean(int A[],int N){
    return ((float)(N))/ A[0];
}

int main(){
    int size,sum = 0;
    cin >> size;
    int arr[size];
    arr[0] = size;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
17
        sum += a;
18
    }
19
    float a =findMean(arr,sum);
20
    printf("%.2f",a);
21
    return 0;
22
}