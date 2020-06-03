//https://codeforces.com/problemset/problem/1295/A
#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
#define endl  '\n'
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n % 2 == 0){
			loop(n/2){
				cout << 1;
			}
		}else{
		    cout << 7;
			loop((n/2) -1){
				cout << 1;
			}
		}
		cout << endl;	
    }
    return 0;
}