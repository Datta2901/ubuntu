#include <iostream>
using namespace std;
int main()
{
int avi[50][50],b[50][50],c,d,i,size,k,p[50][50],sum=0;
  
  cin>>size;
  
  for(c=0;c<size;c++ ) 
  { 
    for(d=0;d<size;d++) 
    { 
      cin>>avi[c][d];
    } 
  } 
   for(c=0;c<size;c++ ) 
  { 
    for(d=0;d<size;d++) 
    { 
      cin>>b[c][d];
    } 
  } 
   for(c=0;c<size;c++ ) 
  { 
    for(d=0;d<size;d++) //00*00+ 01*10 , 00*01 + 01*11
    { 
      for(k=0;k<size;k++) 
      { 
       sum=sum+avi[c][k]*b[k][d];
        }
      p[c][d]=sum;
      sum=0;
    } 
  } 
     for(c=0;c<size;c++ ) 
  { 
    for(d=0;d<size;d++) 
    { 
      cout<<p[c][d]<<" ";
    } cout<<endl;
  } 
 return 0;
}