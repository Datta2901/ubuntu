#include<bits/stdc++.h>
using namespace std;
int n = 10;
vector<int> a,seg;
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
    int right = query(2 * index + 2,low ,highl,r);
    return max(left,right);
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        cin >> a[i];
    }
    build(0,0,n - 1);

    int q;
    cin >> q;
    while(q--){
        int l,r,answer;
        cin >> l >> r;
        answer = query(0,0,n-1,l,r);
        cout << answer << endl;
    }

    cout << " given array is" <<  endl;
    for(int i = 0; n; i++){
        cout << a[i] <<" ";
    }
    cout << "\nsegment tree array is " << endl;
    for(int i = 0; i < 4 * n; i++){
        cout << seg[i] <<" ";
    }
    cout << endl;
    return 0;
}