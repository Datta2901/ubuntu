#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long int A[200009];

int main(){
    int n,m;
    cin >> n >> m;
    int *A;
    A = (int)malloc(sizeof(int)*m);
    for(int i  = 0; i < m; i++){
        int a,b,k;
        cin >> a >> b >> k;
        for(int j = a + 1; j < b;j++){
            A[j] += k; 
        }
    }
    sort(A,A+n);
    cout << A[n-1] << endl;
    return 0;
}