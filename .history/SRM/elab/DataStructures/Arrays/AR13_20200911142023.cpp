#include<bits/stdc++.h>
2
#include<iostream>
3
using namespace std;
4
​
5
float findMean(int A[],int N){
6
    return ((float)(N))/ A[0];
7
}
8
​
9
int main(){
10
    int size,sum = 0;
11
    cin >> size;
12
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