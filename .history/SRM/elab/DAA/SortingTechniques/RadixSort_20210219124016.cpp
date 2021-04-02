// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int GetDigits(int num){
//     int count = 0;
//     while(num > 0){
//         count++;
//         num /= 10;
//     }
//     return num;
// }
// int main(){
//     int size;
//     cin >> size;
//     vector<int> numbers;
//     int max = INT_MIN;
//     for(int i = 0; i < size; i++){
//         int a;
//         cin >> a;
//         numbers.push_back(a);
//         if(max < a){
//             max = a;
//         }
//         for(int i = 1; i < GetDigits(max); i++){
            
//         }
//     }

    
//     return 0;
// }
// C++ implementation of Radix Sort 
#include <iostream> 
using namespace std; 

// A utility function to get maximum value in arr[] 
int getMax(int arr[], int n) 
{ 
	int mx = arr[0]; 
	for (int i = 1; i < n; i++) 
		if (arr[i] > mx) 
			mx = arr[i]; 
	return mx; 
} 

// A function to do counting sort of arr[] according to 
// the digit represented by exp. 
void countSort(int arr[], int n, int exp) 
{ 
	int output[n]; // output array 
	int i, count[10] = { 0 }; 

	// Store count of occurrences in count[] 
	for (i = 0; i < n; i++) 
		count[(arr[i] / exp) % 10]++; 

	// Change count[i] so that count[i] now contains actual 
	// position of this digit in output[] 
	for (i = 1; i < 10; i++) 
		count[i] += count[i - 1]; 

	// Build the output array 
	for (i = n - 1; i >= 0; i--) { 
		output[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
		count[(arr[i] / exp) % 10]--; 
	} 

	// Copy the output array to arr[], so that arr[] now 
	// contains sorted numbers according to current digit 
	for (i = 0; i < n; i++) 
		arr[i] = output[i]; 
} 


void radixsort(int arr[], int n) 
{ 
	int m = getMax(arr, n);  
	for (int exp = 1; m / exp > 0; exp *= 10){ 
		countSort(arr, n, exp); 
    }
} 

// A utility function to print an array 
void print(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
} 

// Driver Code 
int main() 
{ 
	int n;
    cin >> n
    int arr[n];
    for(int  i = 0; i < n; i++){
        cin >> arr[i];
    }
	radixsort(arr, n); 
	return 0; 
}
