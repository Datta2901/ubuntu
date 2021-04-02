#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<string> order{"a","LB","MB","UB","SL","SU"};
    while(t--){
        int number;
        cin >> number;
        if(number % 7 != 0 && number % 8 != 0){
            if((number + 3)  % 8 < number % 8)
            order[number % 3] 
        }
    }
    return 0;
}