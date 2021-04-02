#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<string> order{"UB","LB","MB","SL","SU"};
    while(t--){
        int number,quotient;
        cin >> number;
        
        bool flag = false;
        if(number > 8 && number % 8 != 0){
            number = number % 8 ;
            flag = true;
        }
        int required = number ;
        if(flag){
            required = (number / 8) * number +  
        }
        if(number % 7 != 0 && number % 8 != 0){
            if((number + 3)  % 8 < number % 8){
               cout <<  to_string(number - 3) + order[number % 3]  << endl;
            }
            else{
                cout <<  to_string(number + 3) + order[number % 3]  << endl;
            }
        }
        if(number % 7 == 0){
            cout << to_string(number + 1) + order[4] << endl;
        }
        if(number % 8 == 0){
            cout << to_string(number - 1) + order[3] << endl;
        }
    }
    return 0;
}