// C++ program to shuffle 
// the given array 
// using suffle() method 

#include <bits/stdc++.h> 
using namespace std; 

// Shuffle array 
void shuffle_array(int arr[], int n) 
{ 

	// To obtain a time-based seed 
	unsigned seed = 0; 

	// Shuffling our array 
	shuffle(arr, arr + n, 
			default_random_engine(seed)); 

	// Printing our array 
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver code 
int main() 
{ 

	int n,p;
    cin >> n >> p;
    
	shuffle_array(arr, n); 

	return 0; 
} 
