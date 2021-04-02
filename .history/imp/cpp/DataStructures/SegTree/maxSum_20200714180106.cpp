// when you are given a large number of queries then you can use segment tree
// this is the program to find the maximum sum for a given range l and r

#include<bits/stdc++.h>
using namespace std;
int arr[1111],seg[4444];

void build(int index, int low, int high){               //building tree
    if(low  == high){
        cout <<"low " << low <<" index "<< index  << endl;
        seg[index] = arr[low];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * index + 1,low ,mid);
    build(2 * index + 2,mid + 1,high);
    seg[index] =(seg[2 * index + 1] + seg[2 * index + 2]);
    cout << "index "<< index <<  " seg[index] "<< seg[index] << " seg[left] " << seg[2 * index + 1]  << " seg[right] " << seg[2 * index + 2] << endl;
}

long int query(int index,int low,int high,int l,int r){
    if(low >= l && high <= r){          //given range is completly inside
        return seg[index];
    }if(low > r && high < l){
        return -1;
    }
    int mid = (low + high) / 2;
    int left = query(index,low,high,l,r);
    int right = query(index,low,high,l,r);
    return max(left,r)
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
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        query(0,0,size - 1,l,r);
    }
    return 0;
}