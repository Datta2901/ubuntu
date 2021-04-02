// brute force - O(N)
#include<bits/stdc++.h>
using namespace std;

void primeFactorisation(int n){
    for(int i = 2; i * i <= n; i++){        //instead of sqrt(n) keep n

        if(n % i == 0 ){
            int count = 0;
            while(n % i == 0){
                count++;
                n /= i;
            }
            cout << i << "^" << count << endl;
        }
    }

    if(n > 1){
        cout << n << "^" << 1 << endl;
    } 
}

int prime[10000001];

void primeFactorisationUsingSieve(){
    int maxN = 10000000;
    for(int i = 0; i <= maxN; i++){
        prime[i] = -1;
    }
    for(int i = 2; i * i <= n; )
}

int main(){
    int n;
    cin >> n;
    primeFactorisation(n);
    // time complexity is O(N) for brute force
    // time complexity for this approach is O(sqrt(N))
}