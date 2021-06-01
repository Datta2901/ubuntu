#include<bits/stdc++.h>
using namepace std;

void solve(int *a,int *b){
    int *temp = *a;
    *a = *a + *b;
    *b = abs(*temp - *b);
}

int main(){
    int a,b;
    cin >> a >> b;
    solve(&a,&b);
    cout << a << 
}