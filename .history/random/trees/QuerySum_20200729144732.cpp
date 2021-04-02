#include<iostream>
using namespace std;
#define n 10000

int t[4 * n];

// building of segment tree in O(n)
void build(int a[],int v,int tl,int tr){

    if(tl == tr){
        t[v] = a[tl];
    }else{
        int tm = (tl + tr)/2;
        build(a,2 *v,tl,tm);
        build(a,2 * v + 1,tm + 1,tr);
        t[v] = t[2 * v] + t[2 *v + 1]; 
    }  
}


int main(){
    cout << "Enter the size \n";
    int n;
    cin >> n;
    cout << "Enter the elements of the array\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    build(arr,1,0,n - 1);

    for(int i = 0; i < n; i++){
        cout << t[i] << " " 
    }

    return 0;
}