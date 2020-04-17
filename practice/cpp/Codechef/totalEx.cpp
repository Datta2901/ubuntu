#include<iostream>
using namespace std ;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        double quantity,price;
        cin >> quantity >> price ;
        double totalCost ;
        if(quantity > 1000){
          totalCost = 0.9*quantity*price;
        }else{
            totalCost = quantity*price;
        }
        printf("%ld\n",totalCost);  
    }
    return 0 ;
}
