#include<bits/stdc++.h>
using namespace std;
int n, a[n],seg[4 * n];

void 

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    build(0,0,n - 1);
    return 0;
}