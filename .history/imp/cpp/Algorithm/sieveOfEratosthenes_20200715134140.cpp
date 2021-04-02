#include<bits/stdc++.h>
using namespace std;

int is_prime[1000001];

int main(){

int maxN = 1000000;

for(int i = 1; i <= maxN; i++){
    is_prime[i] = 1;
}
is_prime[0] = 0;
is_prime[1] = 0;

for(int i = 2; i * i < maxN; i++){
    if(is_prime[i] == 1){
        for(int j = i * i; j <= maxN; j += i){
            is_
        }
    }
}



    return 0;
}
