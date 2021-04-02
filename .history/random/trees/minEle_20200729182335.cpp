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
        tree[index] = min(tree[2 * index] ,tree[2 * index + 1]);
    }
}

int query(int index,int low,int high,int l,int r){
    if(l > r){
        return INT_MAX;
    }if(low == l && high == r){
        return tree[index];
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
        int l,r;
        cin >> l >> r;

    }
}
