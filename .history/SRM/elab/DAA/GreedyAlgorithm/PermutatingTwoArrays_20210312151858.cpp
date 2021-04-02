
#include<bits/stdc++.h>
using namespace std;
bool isPossible(int a[], int b[], int n, int k) 
{ 
    sort(a, a + n); 
  
    sort(b, b + n, greater<int>()); 
  
    for (int i = 0; i < n; i++) 
        if (a[i] + b[i] < k) 
            return false; 
  
    return true; 
} 
  
int main() 
{ 
    int a[10]; 
    int b[10]; 
    int k ,i,j,w,l; 
    
  cin>>l;
    for(j=0;j<l;j++ ) { 
cin>>w>>k; int a[w]; 
    int b[w]; 
  for(i=0;i<w;i++ ) { cin>>a[i]; } 
    for(i=0;i<w;i++ ) { cin>>b[i]; } 
    
  
    isPossible(a, b, w, k) ? cout << "YES\n" : 
                             cout << "NO\n"; }
    return 0; 
} 