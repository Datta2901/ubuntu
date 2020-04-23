#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t;
	cin >> t;
	while (t--) {
		int number;
		cin >> number;
		for (int power = 2; power < 30; power) {
			int val = (1 << power) - 1;//left shifft operator
			if (number % val == 0) {
                cerr << val << endl;
				cout << number / val << endl;
				break;
			}
		}
	}
	
    return 0;
}    