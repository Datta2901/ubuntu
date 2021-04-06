// sieve of eratosthenes is used for large number of queries
#include<bits/stdc++.h>
using namespace std;

int is_prime[1000001];
vector<int> primeNumbers;
void sieve(){
    int maxN = 1000000;

    for(int i = 1; i <= maxN; i++){
        is_prime[i] = 1;
    }
    is_prime[0] = 0;
    is_prime[1] = 0;

    for(int i = 2; i * i < maxN; i++){
        if(is_prime[i] == 1){       // i th number is prime;
            for(int j = i * i; j <= maxN; j += i){
                is_prime[j] = 0;
            }
        }
    }
}
int main(){
// time complexity is O(N log(logN));
// space complexity is O(N)
// query complexity is O(1)
    return 0;
}
