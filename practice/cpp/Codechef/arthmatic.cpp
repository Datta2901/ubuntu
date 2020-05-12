#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<iterator>
#include<string>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define testcase() int t;cin >> t; while(t--)
#define endl '\n'
using namespace std;
int FindElement(vector<int> a, int n) 
{ 
    // Find sum of all elements 
    long int sum = 0; 
    for (int i = 0; i < n; i++) 
        sum = sum + a[i]; 
  
    // If mean is an integer 
    if (sum % n == 0) { 
        int m = sum / n; 
  
        // Check if mean is present in the array or not 
        for (int i = 0; i < n; i++){ 
                if (a[i] == m){
                    m = i;
                    break;
                }  
            } 
                return m; 
    } 
  
    return -1; 
} 
int main()
 {
    EXECUTE_FASTER
    testcase(){
        int n,b,answer,m;
        cin >> n;
        vector<int> a;
        loop(n){

            cin >> b;
            a.pb(b);
        }

         m = FindElement(a , n);
         if(m == -1){
             cout << "Impossible\n";
         }else{
       
             cout << m + 1 << endl;
         }

    }
    return 0 ;
    
}