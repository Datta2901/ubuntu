#include<bits/stdc++.h>
using namespace std;
int a[50000],seg[4 * 50000];
void build(int index,int low,int high){
    if(low == high){
        seg[index] = a[low];
        return;
    }
    int mid = (low + high)/ 2;
    build(2 * index + 1,low,mid);
    build(2 * index + 2,mid + 1,high);
    seg[index] = max(seg[2 * index + 1],seg[2 * index + 2]);
}

//for each query it takes O(log(N))
int query(int index,int low ,int high,int l,int r){
    if(low >= l && high <= r){          
        return  seg[index];
    }
    if(high < l || low > r){          // not in the range
        return INT_MIN;
    }
    int mid = (low + high) / 2;
    int left = query(2 * index + 1,low ,mid,l,r);
    int right = query(2 * index + 2,mid + 1 ,high,l,r);
    return max(left, right);
}

int main(){
    // cout << "Enter the size " << endl;
    int n;
    scanf("%d",&n);
    // cout << "Enter the elements " << endl;
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    build(0,0,n - 1);
    int q;
    scanf("%d",&q);
    while(q--){
        // cout << "Enter the l and r \n";  
        int l,r,answer;
        scanf("%d%d",&l,&r);
        answer = query(0,0,n-1,l-1,r-1);
        cout << answer << endl;
    }   
    return 0;
}