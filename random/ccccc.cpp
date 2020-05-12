#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;

void pairsort(int a[], int b[], int n) 
{ 
    pair<int, int> pairt[n]; 
 
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  

    sort(pairt, pairt + n); 
      
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
} 

void psort(int a[], int b[], int n) 
{ 
    pair<int, int> pairt[n]; 
 
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  

    sort(pairt, pairt + n, greater<int>()); 
      
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
} 
int main()
 {
    EXECUTE_FASTER
    int n;
    cin >> n;
    int a[n],b[n];
    long long int sum = 0,sum1 = 0;
    loop(n){
        cin >> b[i] >> a[i] ;
    }
    
    pairsort(a, b, n); 
  

    loop(n){
        sum = sum + a[i];
        n = n -b[i];
    }
    psort(b,a,n);
    loop(n){
        sum1 = sum1 + a[i];
        n = n -b[i];
    }

    if(sum1 <sum){
        sum = sum1;
    }

    cout << sum << endl;
   
      return 0;  
}