#include<bits/stdc++.h>
using namespace std;

void solve(int *a,int *b){
    int *temp1 = a,*temp2 = b;
    *a = *a + *b;
    *temp2 = abs(*temp1 - *b);
    cout << *tem;
}

int main(){
    int a,b;
    cin >> a >> b;
    solve(&a,&b);
    // cout << a << endl;
    // cout << b << endl;
}