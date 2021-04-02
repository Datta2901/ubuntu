#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t;
    cin>>t ;
    while( t-- ){
        int apples , m , k ;
        cin>>apples>>m>>k ;
        int diff = abs(apples-m) ;
         if( diff - k < 0){
             cout<<0<<endl ;
         }else{
             cout<<(diff-k)<<endl ;
         }
    }
    return  0 ;
    
}
