#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cin >> number;
    int start = 1,end = 1,sum = 1;
    while(start <= number/2){
        if(sum < number){
            

        }else if(sum > number){
            sum -= start;
            start = start + 1;
        }
    }
    return 0;
}