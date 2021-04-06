#include<iostream>
using namespace std;
#define n 10000

int t[4 * n];

void build(int a[],int v,int tl,int tr){

    if(tl == tr){
        t[]
    }
    
    else{
        int tm = (tl + tr)/2;
        build(a,2 *v,tl,tm);
        build(a,2 * v + 1,tm + 1,tr);
        t[v] = t[2 * v] + t[2 *v + 1]; 
}   }


int main(){
    cout << "Enter the size \n";
    int m;
    cin >> m;
    cout << "Enter the elements of the array\n";
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }
    build(arr,1,0,m - 1);

    return 0;
}