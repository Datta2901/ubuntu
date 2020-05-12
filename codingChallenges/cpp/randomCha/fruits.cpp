#include<bits/stdc++.h>
#include<iostream>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
    int a,b,c,d,m,o,t,A;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        A = (a + c -b )/ 2;
        m =( a + b -c )/ 2;
        o =( b + c - a) /2 ;
        cout << A << " " << m <<" "<< o  << endl; 

    }
    return 0 ;
 }   