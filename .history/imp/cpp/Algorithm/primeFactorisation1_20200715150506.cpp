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

// time complexity is O (lo)

int prime[10000001];
// start
void primeFactorisationUsingSieve(){
    int maxN = 10000000;
    for(int i = 0; i <= maxN; i++){
        prime[i] = -1;
    }
    for(int i = 2; i * i <= maxN; i++){
        if(prime[i] == -1){
            for(int j = i; j <= maxN; j++){
                if(prime[j] == -1){
                    prime[j] = i;
                }
            }
        }
    }
}

// this is the function to be used to calculate prime factorisation of the number.which we have already have prime array;
vector<int> pfUsingSieve(int n){
    vector<int>primeFactors;
    while(n != 1){
        primeFactors.push_back(prime[n]);
        n /= prime[n];
    }
    return primeFactors;
}
// end

int main(){
    int n;
    cin >> n;
    primeFactorisation(n);
    // time complexity is O(N) for brute force
    // time complexity for this approach is O(sqrt(N))
}