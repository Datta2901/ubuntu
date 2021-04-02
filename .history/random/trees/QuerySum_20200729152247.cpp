// Segment highee 
// Giindexen array find the sum between giindexen range l and r
// when queries are large then segment highee can be used
#include<iostream>
using namespace std;
#define m 10
int t[4 * m];// maximum size of the segment highee is 4 * size of giindexen  array

// building of segment highee in O(n) 
// building the the highee 
indexoid build(int a[],int index,int low,int high){

    if(low == high){
        t[index] = a[low];
    }else{
        int tm = (low + high)/2;
        build(a,2 *index,low,tm); 
        build(a,2 * index + 1,tm + 1,high);
        t[index] = t[2 * index] + t[2 *index + 1]; 
    }  
}

// can be calculated in log(n)
int sum(int index,int low,int high,int l,int r){
    if(l > r){
        return 0;
    }
    if(l == low && r == high){
        return t[index];
    }
    int tm = (low + high) / 2;
    return sum(2 * index,low,tm,l,min(tm,r)) + sum(2 * index + 1,tm + 1,high,max(tm + 1,l),r); 
}


int main(){
    cout << "Enter the size \n";
    int n;
    cin >> n;
    int arr[n + 1];
    arr[0]=0;
    cout << "Enter the elements of the array\n";
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    build(arr,1,1,n);

    cout << "Segment highee is ";
    for(int i = 1; i < 4 * n; i++){
        cout << t[i] << " " ;
    }
    cout << endl;
    cout << "Enter the number of queries \n";
    int q;
    cin >> q;
    while(q--){
        int l ,r;
        cout << "Enter the range " << endl;
        cin >> l >> r;
        cout << "Sum from " <<  l  << " to " << r << " is ";
        cout << sum(1,1,n,l,r) << endl;
    }
    return 0;
}