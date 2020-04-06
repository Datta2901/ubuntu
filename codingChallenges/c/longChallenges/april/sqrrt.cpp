#include <bits/stdc++.h> 
using namespace std; 
int countPrimeFactors(int n) 
{ 
    int c=0 ;

	while (n % 2 == 0) 
	{  
        c++ ;
		n = n/2; 
	} 

	for (int i = 3; i <= sqrt(n); i = i + 2) 
	{ 
		while (n % i == 0) 
		{    c++ ;

			n = n/i; 
		} 
	} 
	if (n > 2) {
        c++;
    }
         return c;
} 

/* Driver code */
int main() 
{ 
    int t ;
    cin>>t ;
    while(t--)
    {   int n,k ;
        cin>>n ;
        cin>>k; 
        if (countPrimeFactors(n) < k) {
            cout << 0 <<endl;
        } else{
            cout <<1 <<endl;
        }
    } 
	return 0; 
} 

// This is code is contributed by rathbhupendra 
