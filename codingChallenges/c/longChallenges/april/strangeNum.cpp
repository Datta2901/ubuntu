#include<iostream>
#include<bits/stdc++.h> 
using namespace std; 
void sieveOfEratosthenes(int N, int s[]) 
{ 
	vector <bool> prime(N+1, false); 
	for (int i=2; i<=N; i+=2) 
		s[i] = 2; 

	for (int i=3; i<=N; i+=2) 
	{ 
		if (prime[i] == false) 
		{ 
			s[i] = i; 

			for (int j=i; j*i<=N; j+=2) 
			{ 
				if (prime[i*j] == false) 
				{ 
					prime[i*j] = true; 
					s[i*j] = i; 
				} 
			} 
		} 
	} 
} 

long int generatePrimeFactors(int N) 
{  
	int s[N+1];
    long int p=0 ;  
	sieveOfEratosthenes(N, s); 
	int curr = s[N]; 
	int cnt = 1; 
	while (N > 1) 
	{ 
		N /= s[N]; 
		if (curr == s[N]) 
		{ 
			cnt++;
           
			continue; 
		} 
        p=p+cnt ;
		curr = s[N];
		cnt = 1; 
	} 
    return p ;
} 
int main() 
{ 
	long int t ;
    cin>>t ;
    while(t--)
    {
        long int N,k,a ;
        cin>>N ;
        cin>>k ;

        a= generatePrimeFactors(N);
        if(a>=k) 
        {
            cout<<"1\n" ;
        }
        if(a<k)
        {
            cout<<"0\n" ;
        }
    }
	
	return 0; 
} 
