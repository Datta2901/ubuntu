// C++ program to shuffle 
// the given array 
// using suffle() method 

#include <bits/stdc++.h> 
using namespace std; 

// Shuffle array 
void shuffle_array(long int arr[], long int n) 
{ 

	// To obtain a time-based seed 
	unsigned seed = 0; 

	// Shuffling our array 
	shuffle(arr, arr + n, 
			default_random_engine(seed)); 

	// Prlong inting our array 
	for (long int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver code 
int main() 
{ 

	long int n,p;
    cin >> n >> p;
    long int arr[n];
    for(long int i = 0; i < )
    for(long int i = 0; i < n; i++){
        arr[i] = i + 1;
    }
	shuffle_array(arr, n); 

	return 0; 
} 
