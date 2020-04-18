#include<iostream>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        long int candies,answer ;
        cin >> candies;
        answer = (candies -1)/2 ;
        cout << answer << endl;   
    }
}