#include<bits/stdc++.h>
using namespace std;

void printSums(int N){
    int start = 1,end = 1,sum = 1;
    while(start <= number/2){
        if(sum < number){
            end = end + 1;
            sum += end;
        }else if(sum > number){
            sum -= start;
            start = start + 1;
        }else{
            for(int i = start; i <= end; i++){
                cout << i << " "; 
            }
            cout << endl;
            sum = sum - start;
            start = start + 1;
        }
    }
}

int main(){
    int number;
    cin >> number;
    
    return 0;
}