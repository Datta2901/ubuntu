#include<bits/stdc++.h>
using namespace std;
int n, a[n],seg[4 * n];

void build(int index,int low,int high){
    if(low == high){
        seg
    }
    int mid = (low + high)/ 2;
    build(2 * index + 1,low,mid);
    build(2 * indec + 2,mid + 1,high);
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    build(0,0,n - 1);
    return 0;
}