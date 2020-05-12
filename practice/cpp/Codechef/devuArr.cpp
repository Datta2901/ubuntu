#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<iterator>
#include<string>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
    int n,q,a;
    cin >> n >> q  ;
    vector<int> array;
   loop(n){
       cin >> a;
       array.pb(a);
    }
    
    sort(array.begin(),array.end());
    
    loop(q){
       cin >> a;
       if(a >= array[0] && a <= array[n-1]){
          cout << "Yes\n";
       }else{
          cout << "No\n";
       }
    }
    
    array.clear();
    return 0;
 }   