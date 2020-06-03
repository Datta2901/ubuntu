#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int CheckingPrime(int n) {
    if (n == 1) {
        return 0;
    }
    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
            return 0;
        }
        i += 1;
    }
    return 1;
}

int main() {
    EXECUTE_FASTER
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    for (int i = n; i <= m; i++)
	        if(CheckingPrime(i) == 1)
	            cout << i << endl;
	   cout << endl;
	}
	return 0;
}
