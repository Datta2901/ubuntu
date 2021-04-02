#include<bits/stdc++.h>
using namespace std;

void printSums(int N){
    int start = 1,end = 1,sum = 1;
    while(start <= NAME_MAX/2){
        if(sum < NAME_MAX){
            end = end + 1;
            sum += end;
        }else if(sum > NAME_MAX){
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
    int NAME_MAX;
    cin >> NAME_MAX;
    printSums(NAME_MAX);
    return 0;
}
