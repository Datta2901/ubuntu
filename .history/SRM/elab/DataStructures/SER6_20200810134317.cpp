#include<bits/stdc++.h>
using namespace std;

void findClosest(int A[], int B[], int C[], int p, int q, int r){
 
    int difference = INT_MAX ; 
    int mini = INT_MIN, minj = INT_MIN, mink = INT_MIN;
    int i=0,j=0,k=0;
    int maxi,mini;
    while (i < p && j < q && k < r){
        mini = min(A[i], min(B[j], C[k]));
        maxi = max(A[i], max(B[j], C[k]));
        if(maxi -  mini < difference){
             mini = i, minj = j, mink = k;
             difference = maxi - mini;
        }
 
       
        if (difference == 0) break;
        if (A[i] == mini) i++;
        else if (B[j] == mini) j++;
        else k++;
    }
    cout << A[mini] << " " << B[minj] << " " << C[mink];
}
 

int main(){
    int p,q,r;
    cin >> p;
    int A[p] ;
    for(int i = 0; i < p; i++){
        cin >> A[i];
    }
    cin >> q;
    int B[q] ;
    for(int i = 0; i < q; i++){
        cin >> B[i];
    }
    cin >> r;
    int C[r] ;
    for(int i = 0; i < r; i++){
        cin >> C[i];
    }
    findClosest(A, B, C, p, q, r);
    return 0;
} 