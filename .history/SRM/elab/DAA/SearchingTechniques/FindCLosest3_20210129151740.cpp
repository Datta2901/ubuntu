#include<bits/stdc++.h> 
using namespace std; 
  
void findClosest(int A[], int B[], int C[], int p, int q, int r) 
{ 
  
    int diff = 1000;  // Initialize min diff 
  
    // Initialize result 
    int res_i =0, res_j = 0, res_k = 0; 
  
    // Traverse arrays 
    int i=0,j=0,k=0; 
    while (i < p && j < q && k < r) 
    { 
        // Find minimum and maximum of current three elements 
        int minimum = min(A[i], min(B[j], C[k])); 
        int maximum = max(A[i], max(B[j], C[k])); 
  
        // Update result if current diff is less than the min 
        // diff so far 
        if (maximum-minimum < diff) 
        { 
             res_i = i, res_j = j, res_k = k; 
             diff = maximum - minimum; 
        } 
  
        // We can't get less than 0 as values are absolute 
        if (diff == 0) break; 
  
        // Increment index of array with smallest value 
        if (A[i] == minimum) i++; 
        else if (B[j] == minimum) j++; 
        else k++; 
    } 
  
    // Print result 
    cout << A[res_i] << " " << B[res_j] << " " << C[res_k]; 
} 
vector<int> Input(int size){
    vector<int>A;
    for(int i = 0; i < size;i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    return A;
}  

// Driver program 
int main() { 
    vector<int>A,B,C; 
    int size1,size2,size3;
    cin >> size1;
    A = Input(size1);
    cin >> size2;
    B = Input(size2);
    cin >> size3;
    C = Input(size3);
    findClosest(A, B, C,); 
    return 0; 
} 