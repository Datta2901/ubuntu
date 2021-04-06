#include<bits/stdc++.h>
using namespace std;
#define n 100000
int arr[n],tree[4 * n];
int main(){
    cout << "Enter the size" << endl;
    cin >> n;
    arr[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    build()
    return 0;
}