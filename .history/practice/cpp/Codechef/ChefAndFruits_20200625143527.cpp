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
        int differn = abs(apples - orange) ;
         if( differn - k < 0){
             cout<<0<<endl ;
         }else{
             cout<<(differn-k)<<endl ;
         }
    }
    return  0 ;
    
}
