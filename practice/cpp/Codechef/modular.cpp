#include <iostream>
#include<cstdint>
#include <bits/stdc++.h>
#define modulo 1000000007 
#define loop(n) for(int i = 0; i < n; i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    long long int t,n,a,b,e;
     __int128 num,answer,c,d,diff;
    //  long long num,answer,c,d;
    cin>>t;
    while(t--){

        cin >> a >> b >> n ;
        c = pow(a,n)  ;
        d = pow(b,n) ;
        num =  c % modulo+ d  %  modulo;

        diff = a-b ;

        if(diff == 0){
           cout << num % modulo  << endl;
        }else{
            answer = __gcd(num, diff);
            cout << answer % modulo << endl; 
        }

    }
    return 0;
}