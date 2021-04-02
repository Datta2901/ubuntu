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
13
    arr[0] = size;
14
    for(int i = 0; i < size; i++){
15
        int a;
16
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