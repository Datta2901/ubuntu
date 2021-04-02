#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t;
    cin>>t ;
    while( t-- ){
        int apples , orange, coins ;
        cin>>apples>> orange >>coins ;
        int differ = abs(apples - orange) ;
         if( differ - k < 0){
             cout<<0<<endl ;
         }else{
             cout<<(differ-k)<<endl ;
         }
    }
    return  0 ;
    
}
