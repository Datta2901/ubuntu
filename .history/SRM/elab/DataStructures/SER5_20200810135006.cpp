#include<bits/stdc++.h>
using namespace std;

void printSums(int N){
    int start = 1,end = 1,sum = 1;
    while(start <= N/2){
        if(sum < N
){
            end = end + 1;
            sum += end;
        }else if(sum > N
){
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
    int N;
    cin >> N;
    printSums(N);
    return 0;
}
