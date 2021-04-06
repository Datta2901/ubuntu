#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void InSort(int arr[],int n){
    sort(arr,arr+n);
    cout << "Sorted Array:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cin >> size;
    int arr[size],a[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        a[i] = arr[i];
    }
  	sort(a,a+3);
  	for(int i = 0; i < 3; i++){
    	cout << a[i] << " ";
    }
  	for(int i = 3; i < size; i++){
      	if(i != size - 1)
    	cout << arr[i] << " ";
      	else
          cout << arr[i];
    }
  	cout << endl;
    InSort(arr,size);
    return 0;
}