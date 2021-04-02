#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 1;
bool Exist[N] = {true};

int main(){
    for(int i = 2; i <= N; i++){
        if(Exist[i] == true && i * i < N){
            for(int j = i * i; j <= N; j += i){
                Exist[j] = false;
            }
        }
    }
    // Time complexity is O9
    int t;
    cin >> t;
    while(t--){

    }
    return 0;
}