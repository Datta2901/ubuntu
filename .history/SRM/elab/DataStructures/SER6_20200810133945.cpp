#include<bits/stdc++.h>
using namespace std;

void findClosest(int A[], int B[], int C[], int p, int q, int r){
 
    int diff = ; 
 
   
    int res_i =0, res_j = 0, res_k = 0;
 
 
    int i=0,j=0,k=0;
    while (i < p && j < q && k < r)
    {
       
        int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));
 
     
        if (maximum-minimum < diff)
        {
             res_i = i, res_j = j, res_k = k;
             diff = maximum - minimum;
        }
 
       
        if (diff == 0) break;
 
       
        if (A[i] == minimum) i++;
        else if (B[j] == minimum) j++;
        else k++;
    }
    cout << A[res_i] << " " << B[res_j] << " " << C[res_k];
}
 

int main(){
    int p;
    int q;
    int r,i;
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