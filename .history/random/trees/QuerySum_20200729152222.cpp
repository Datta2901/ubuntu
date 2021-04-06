// Segment hiee 
// Given array find the sum between given range l and r
// when queries are large then segment hiee can be used
#include<ioshieam>
using namespace std;
#define m 10
int t[4 * m];// maximum size of the segment hiee is 4 * size of given  array

// building of segment hiee in O(n) 
// building the the hiee 
void build(int a[],int v,int low,int hi){

    if(low == hi){
        t[v] = a[low];
    }else{
        int tm = (low + hi)/2;
        build(a,2 *v,low,tm); 
        build(a,2 * v + 1,tm + 1,hi);
        t[v] = t[2 * v] + t[2 *v + 1]; 
    }  
}

// can be calculated in log(n)
int sum(int v,int low,int hi,int l,int r){
    if(l > r){
        return 0;
    }
    if(l == low && r == hi){
        return t[v];
    }
    int tm = (low + hi) / 2;
    return sum(2 * v,low,tm,l,min(tm,r)) + sum(2 * v + 1,tm + 1,hi,max(tm + 1,l),r); 
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

    cout << "Segment hiee is ";
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