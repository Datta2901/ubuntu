#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int element;
    cin >> element;
    int low  = 0,high = size - 1;
    while(low <= high){
        int mid = (high + low ) / 2;
        if(arr[mid] == element){
            cout << arr[mid] << endl;
        }else if(element < arr[mid]){
            high = mid -1
        }
    }
}