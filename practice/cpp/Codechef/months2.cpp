#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[7]={4,4,4,4,4,4,4};
	    string s;
	    cin>>s;
	    if(s=="mon")
	    {
	        for(i=0;i<n%7;i++)
	        {
	            a[i]++;
	        }
	    }
	    else if(s=="tues")
	    {
	        for(i=1;i<n%7+1;i++)
	        {
	            a[i]++;
	        }
	    }
	     else if(s=="wed")
	    {
	        for(i=2;i<n%7+2;i++)
	        {
	            a[i]++;
	        }
	    }
	     else if(s=="thurs")
	    {
	        for(i=3;i<n%7+3;i++)
	        {
	            a[i]++;
	        }
	    }
	     else if(s=="fri")
	    {
	        for(i=4;i<n%7+4;i++)
	        {
	            a[i]++;
	        }
	    }
	     else if(s=="sat")
	    {
	        for(i=5;i<n%7+5;i++)
	        {
	            if(i==7)
	            {
	                a[0]++;
	            }
	            else
	            {a[i]++;}
	        }
	    }
	     else if(s=="sun")
	    {
	        for(i=6;i<n%7+6;i++)
	        {
	             if(i==7)
	            {
	                a[0]++;
	            }
	            if(i==8)
	            {
	                a[1]++;
	            }
	            else
	            {a[i]++;}
	        }
	    }
	    for(i=0;i<7;i++)
	 {   cout<<a[i]<<" ";
	}
	cout<<endl;}
	return 0;
}
