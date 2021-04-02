#include<bits/stdc++.h>
using namespace std;
#define n 10000
int arr[n],tree[4 * n];

void build(int index,int low,int high){
    if(low == high){
        tree[index] = arr[low];
    }
    int mid = (low + high) / 2;
    build(2 * index,low ,mid);
    build(2 * index + 1,mid + 1,high)
}

int main(){
	cout << "Enter the size " << endl;
	arr[0] = 0;
	for(int i = 0; i <= n; i++){
		cin >> arr[i];
	}
	build(1,1,n);

}
