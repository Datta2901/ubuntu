#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 1;
bool Exist[N] = {true};

int main(){
    for(int i = 2; i <= N; i++){
        if(Exist[i] == 1 && i * i < N){
            for(int j = i * i; j <= N; j += i){
                Exist[j] = falss;
            }
        }
    }
    int t;
    cin >> t;
    while(t--){

    }
    return 0;
}