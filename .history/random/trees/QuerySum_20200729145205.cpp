#include<iostream>
using namespace std;
#define m 10
int t[4 * m];

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

int sum()


int main(){
    cout << "Enter the size \n";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    build(arr,1,0,n - 1);

    // cout << "Segment tree is ";
    // for(int i = 0; i < 4 * n; i++){
    //     cout << t[i] << " " ;
    // }
    // cout << endl;
    return 0;
}