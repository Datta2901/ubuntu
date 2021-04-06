#include<bits/stdc++.h>
using namespace std;
int n, a[n],seg[4 * n];

void build(int index,int low,int high){
    if(low == high){
        seg[index] = a[low];
    }
    int mid = (low + high)/ 2;
    build(2 * index + 1,low,mid);
    build(2 * indec + 2,mid + 1,high);
}

int query(int index,int low ,int high,int l,int r){
    if(low >= l && high <= r){          //completely in the range
        return  seg[ind];
    }
    if(high < l || low > r){          // not in the range
        return INT_MIN;
    }
    int mid = (low + high) / 2;
    int left = query(2 * index + 1,low ,mid,l,r);
    int right = query(2 * index + 2,l,r);
    return max(left,max)
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    build(0,0,n - 1);

    int query;
    cin >> query;
    while(query--){
        int l,r,answer;
        cin >> l >> r;
        answer = query(0,0,n-1,l,r);
    }

    return 0;
}