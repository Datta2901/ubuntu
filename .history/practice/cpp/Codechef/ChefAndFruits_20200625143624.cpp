#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t ;
    while( t-- ){
        int apples , orange, coins ;
        cin>>apples>> orange >>coins ;
        int difference = abs(apples - orange) ;
         if( difference - coins < 0){
             cout<< 0 <<endl ;
         }else{
             cout<< difference - coins <<endl ;
         }
    }
    return  0 ;
    
}
