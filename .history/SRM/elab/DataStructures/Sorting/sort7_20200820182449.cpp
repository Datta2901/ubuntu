#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void result(int a[],int b[],int n){
    sort(a,a+n);
    long long int sum = 0;
    for(int  i = 0; i < n; i++){
        sum += a[i] * a[(2 * n) - i - 1];
    }
    cout << sum << endl;
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

        // for(int  i = 0; i <= size; i++){
        //     cout << i << " " << (2 * size) - i - 1 << endl;
        // }

        result(arr1,arr1,size);
    }






    return 0;
}