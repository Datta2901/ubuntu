#include "bits/stdc++.h" 
using namespace std; 
#define MAXN 1000000000 
long int spf[MAXN]; 
void sieve() 
{ 
	spf[1] = 1; 
	for (int i=2; i<MAXN; i++)  
		spf[i] = i; 
	for (int i=4; i<MAXN; i+=2) 
		spf[i] = 2; 

	for (int i=3; i*i<MAXN; i++) 
	{ 
		if (spf[i] == i) 
		{ 
			for (int j=i*i; j<MAXN; j+=i) 
				if (spf[j]==j) 
					spf[j] = i; 
		} 
	} 
} 
vector<long int> getFactorization(long int x) 
{ 
	vector<long int> ret; 
	while (x != 1) 
	{ 
		ret.push_back(spf[x]); 
		x = x / spf[x]; 
	} 
	return ret; 
} 

int main() 
{ 
    long int t ;
    cin>>t ;
    while(t--)
    {
        sieve(); 
        long int x ,c=0,n;
        cin>>x ;
        cin>>n ;  
        vector <long int> p = getFactorization(x); 

        for (int i=0; i<p.size(); i++)
        {   c++ ;   
        }cout<<c ; 
        if(c>=n)   
        cout <<"1"<<endl ;
        else if(c<n) 
        cout<<"0"<<endl ;
    } 
	return 0; 
} 
