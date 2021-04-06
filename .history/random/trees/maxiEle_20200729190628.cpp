// Using Segment tree 
// Finding the maximum between given range l and r
// For large number of queries
#include<bits/stdc++.h>
using namespace std;
#define m 10000
int tree[4 * m];

void build(int arr[],int index,int low,int high){
    if(low == high){
        tree[index] = arr[low];
    }else{
        int mid = (low + high) / 2;
        build(arr,2 * index,low ,mid);
        build(arr,2 * index + 1,mid + 1,high);
        tree[index] = max(tree[2 * index] ,tree[2 * index + 1]);
    }
}

int query(int index,int low,int high,int l,int r){
    if(l > r){
        return INT_MIN;
    }if(low == l && high == r){
        return tree[index];
    }
    int mid = (low + high) / 2;
    int left = query(2 * index,low,mid,l,min(mid,r));
    int right = query(2 * index + 1,mid + 1,high,max(mid + 1,l),r);
    return max(left,right);
}

void update(int ,int tl,int tr,int pos,int new_val){
    if(tl == tr){
        tree[] = new_val;
    }else{
        int tm = (tl + tr) / 2;
        if(pos <= tm){
            update(2 * ,tl,tm,pos,new_val);
        }else{
            update(2 *  + 1,tm + 1,tr,pos,new_val);
        }
        tree[v] = tree[2 * ] + tree[2 *  + 1];
    }    
}

int main(){
	cout << "Enter the size " << endl;
    int n;
    cin >> n;
    int arr[n];
	arr[0] = 0;
    cout << "Enter the elements" << endl;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	build(arr,1,1,n);
    cout << "Segment tree updated with " << " is ";
    for(int i = 1; i < 4 * n; i++){
        cout << tree[i] << " " ;
    }
    cout << endl;
    cout <<  "Enter the number of queries\n";
    int q;
    cin >> q;
    while(q--){
        cout << "Enter the range between l and r \n";
        int l,r;
        cin >> l >> r;
        cout << query(1,1,n,l,r) << endl;
    }
    return 0;
}
