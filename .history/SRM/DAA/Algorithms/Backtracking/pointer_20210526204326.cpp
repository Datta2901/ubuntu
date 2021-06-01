#include<bits/stdc++.h>
using namespace std;

void solve(int *a,int *b){
    int *temp ;
    temp= a;
    cout << *temp <
    *a = *a + *b;
    *b = abs(*temp - *b);
}

int main(){
    int a,b;
    cin >> a >> b;
    solve(&a,&b);
    cout << a << endl;
    cout << b << endl;
}