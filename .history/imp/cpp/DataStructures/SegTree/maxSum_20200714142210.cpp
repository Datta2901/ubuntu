#include<bits/stdc++.h>
using namespace std;
int arr[1111],seg[4444];

void build(int index, int low, int high){
    if(low  == high){
        long int sum = 0;
        for(int i = 0; i <= index; i++){
            sum += arr[i];
        }
        seg[index] = sum;
        return;
    }
    int mid = (low + high) / 2;
    build(2 * index + 1,low ,mid);
    build(2 * index + 2,mid + 1,high);
    seg[index] = max(seg[2 * index + 1],seg[2 * index + 2]);
}

int main(){
    cout << "Enter the size of array \n";
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    build(0,0,size -1);
    


    return 0;
}