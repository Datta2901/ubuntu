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
        int difference = abs(apples - orange) ;
         if( difference - coins < 0){
             cout<<0 <<endl ;
         }else{
             cout<<(difference-k)<<endl ;
         }
    }
    return  0 ;
    
}
