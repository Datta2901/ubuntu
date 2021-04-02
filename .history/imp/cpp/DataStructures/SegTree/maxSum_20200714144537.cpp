#include<bits/stdc++.h>
using namespace std;
int arr[1111],seg[4444];

void build(int index, int low, int high){
    if(low  == high){
        long int sum = 0;
        for(int i = 0; i <= low; i++){
            sum += arr[i];
        }
        cout <<"low " << low <<" index "<< index << " sum  " << sum << endl;
        seg[index] = sum;
        return;
    }
    int mid = (low + high) / 2;
    build(2 * index + 1,low ,mid);
    build(2 * index + 2,mid + 1,high);
    seg[index] =(seg[2 * index + 1] + seg[2 * index + 2]);
    cout << " "<< seg[index]
}

int main(){
    cout << "Enter the size of array \n";
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    build(0,0,size -1);

    cout << " given array is" <<  endl;
    for(int i = 0;i < size; i++){
        cout << arr[i] <<" ";
    }
    cout << "\nsegment tree array is " << endl;
    for(int i = 0; i < 4 * size; i++){
        if(seg[i] != 0){
            cout << seg[i] <<" ";
        }  
    }
    return 0;
}