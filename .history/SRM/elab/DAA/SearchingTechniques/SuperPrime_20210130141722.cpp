#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 1;
bool Exist[N] = {true};

int main(){
    Exist[0] = Exist[1] = false;
    for(int i = 2; i <= N; i++){
        if(Exist[i] == true && i * i < N){
            for(int j = i * i; j <= N; j += i){
                Exist[j] = false;
            }
        }
    }
    // Time complexity is O(nlog(logn))
    int t;
    cin >> t;
    while(t--){
        int number;
        cin >> number;
        for(int i = 2; i < number; i++){
            if(Exist)
        }
    }
    return 0;
}