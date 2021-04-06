#include<bits/stdc++.h>
#define MAXN 100001
using namespace std;

int n, t[4 * MAXN];

void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}

int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}

int main(){
    cin >> n;
    int arr[n];
    for(int i = 1; i <= n; i++){
        cin >> arr[n];
    }
    build(arr,1,1,n);
    // cout << "\nsegment tree array is " << endl;
    // for(int i = 1; i < 4 * n; i++){
    //     if(t[i] != 0){
    //         cout << t[i] <<" ";
    //     }  
    // }
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
    }
    return 0;
}
