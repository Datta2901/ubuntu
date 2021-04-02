#include<bits/stdc++.h>
using namespace std; 
int findSum(int A[], int N){ 
	if (N <= 0) 
		return 0; 
	return (findSum(A, N - 1) + A[N - 1]); 
} 
 
int main() { 
	int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < size; i++){
        cin >> A[i]
    }
	printf("%dn", findSum(A, N)); 
	return 0; 
} 
