#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void mergeArrays(int arr1[],int arr2[],int n1,int n2,int arr3[]){
    for(int i = 0; i < n1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    int arr[n1 + n2];
    for(int i = 0; i < n1 + n2; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n1+n2);
    mergeArrays(arr,arr,n1+n2,n1+n2,arr);
    return 0;
}

// sorting the given array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int size;
//     cin >> size;
//     int arr[size];
//     for(int i = 0 ; i  < size; i++){
//         cin >> arr[i];
//     }
//     sort(arr,arr + size);
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// finding the maximum sum and minimum sum of n-1 numbers

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int size;
//     cin >> size;
//     int arr[size],sum = 0;;
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     sort(arr,arr + size);
//     cout << sum - arr[size - 1] << " " <<  sum - arr[0];
//     return 0;
// }

