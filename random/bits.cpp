#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;

void pairsort(int a[], int b[], int n) 
{ 
    pair<int, int> pairt[n]; 
  
    // Storing the respective array 
    // elements in pairs. 
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  
    // Sorting the pair array. 
    sort(pairt, pairt + n); 
      
    // Modifying original arrays 
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
} 

void psort(int a[], int b[], int n) 
{ 
    pair<int, int> pairt[n]; 
  
    // Storing the respective array 
    // elements in pairs. 
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  
    // Sorting the pair array. 
    sort(pairt, pairt + n,greater<int>()); 
      
    // Modifying original arrays 
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
} 

int main()
 {
    EXECUTE_FASTER
    // ifstream cin("stdin");
    // ofstream cout("stdout");
    int n;
    cin >> n;
    int a[n],b[n];
    long long int sum = 0,sum1 = 0;
    loop(n){
        cin >> b[i] >> a[i] ;
    }
    
    pairsort(a, b, n); 
  
    // for (int i = 0; i < n; i++) 
    //     cout << b[i] << " "; 
    //     cout << endl; 
  
    // for (int i = 0; i < n; i++) 
    //     cout << a[i] << " "; 

    loop(n){
        sum = sum + a[i];
        n = n -b[i];
    }

    psort(b,a,n);

    loop(n){
        sum1 = sum1 + a[i];
        n = n -b[i];
    }
    if(sum > sum1){
         sum = sum1;
    }

    cout << sum << endl;
   
      return 0;  
}
// // Sort an array according to 
// // other using pair in STL. 
// #include <bits/stdc++.h> 
// using namespace std; 

// // Function to sort character array b[] 
// // according to the order defined by a[] 
// void pairsort(int a[], char b[], int n) 
// { 
// 	pair<int, char> pairt[n]; 

// 	// Storing the respective array 
// 	// elements in pairs. 
// 	for (int i = 0; i < n; i++) 
// 	{ 
// 		pairt[i].first = a[i]; 
// 		pairt[i].second = b[i]; 
// 	} 

// 	// Sorting the pair array. 
// 	sort(pairt, pairt + n); 
	
// 	// Modifying original arrays 
// 	for (int i = 0; i < n; i++) 
// 	{ 
// 		a[i] = pairt[i].first; 
// 		b[i] = pairt[i].second; 
// 	} 
// } 

// // Driver function 
// int main() 
// { 
// 	int a[] = {2, 1, 5, 4, 9, 3, 6, 7, 10, 8}; 
// 	char b[] = {'A', 'B', 'C', 'D', 'E', 'F', 
// 						'G', 'H', 'I', 'J'}; 
						
// 	int n = sizeof(a) / sizeof(a[0]); 
	
// 	// Function calling 
// 	pairsort(a, b, n); 

// 	for (int i = 0; i < n; i++) 
// 		cout << a[i] << " "; 
// 	cout << endl; 

// 	for (int i = 0; i < n; i++) 
// 		cout << b[i] << " "; 
		
// 	return 0; 
// } 
