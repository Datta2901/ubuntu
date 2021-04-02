#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t;
    cin>>t ;
    while( t-- ){
        int n , m , k ;
        cin>>n>>m>>k ;
        int diff = abs(n-m) ;
         if( diff - k < 0){
             cout<<0<<endl ;
         }else{
             cout<<(diff-k)<<endl ;
         }
    }
    return  0 ;
    
}
