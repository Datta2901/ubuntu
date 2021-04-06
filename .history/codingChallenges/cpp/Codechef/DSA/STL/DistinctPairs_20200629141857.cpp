// #include<bits/stdc++.h>
// #include<vector>
// #include<iostream>
// #include<cmath>
// #include<algorithm>
// #include<iterator>
// #include<string>
// #include<map>
// #define F first
// #define S second
// #define MP make_pair
// #define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
// #define MOD 1000000007
// #define ll long long int 
// #define loop(n) for(int i= 0;i< n;i++)
// #define rep(e,var) for(int var = 0; var < e; var++)
// #define repeat(n,a) for(int i=a;i<n;i++)
// #define vec(datStruct) vector<datStruct>
// #define inc_sort(v) sort(v.begin(),v.end());
// #define pb push_back
// #define endl '\n'
// using namespace std;
// #define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
// #define testcase() int t; cin >> t; while(t--)

// int main(){
//     EXECUTE_FASTER
//     int m,n;
//     cin >> m >> n;
//     vector< pair<long int,long long int> >A,B;
//     loop(m){
//         long  int a;
//         cin >> a;
//         A.pb(make_pair(a,i));
//     }

//     sort(A.begin(),A.end());

//     loop(n){
//         int a;
//         cin >> a;
//         B.pb(make_pair(a,i)); 
//     }

//     sort(B.begin(),B.end());

   
    

   
    
    


//     return 0;
// }
// C++ program to demonstrate sorting in 
// vector of pair according to 1st element 
// of pair 
#include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// Declaring vector of pairs 
	vector< pair <int,int> > vect; 

	// Initializing 1st and 2nd element of 
	// pairs with array values 
	int arr[] = {10, 20, 5, 40 }; 
	int arr1[] = {30, 60, 20, 50}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	// Entering values in vector of pairs 
	for (int i=0; i<n; i++) 
		vect.push_back( make_pair(arr[i],arr1[i]) ); 

	// Printing the original vector(before sort()) 
	cout << "The vector before sort operation is:\n" ; 
	for (int i=0; i<n; i++) 
	{ 
		// "first" and "second" are used to access 
		// 1st and 2nd element of pair respectively 
		cout << vect[i].first << " "
			<< vect[i].second << endl; 

	} 

	// Using simple sort() function to sort 
	sort(vect.begin(), vect.end()); 

	// Printing the sorted vector(after using sort()) 
	cout << "The vector after sort operation is:\n" ; 
	for (int i=0; i<n; i++) 
	{ 
		// "first" and "second" are used to access 
		// 1st and 2nd element of pair respectively 
		cout << vect[i].first << " "
			<< vect[i].second << endl; 
	} 

	return 0; 
} 
