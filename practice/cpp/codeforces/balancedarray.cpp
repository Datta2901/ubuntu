#include <iostream>
#include <bits/stdc++.h>
#define loop(n)  for(int i = 1; i <= n; i++)
#define loop1(n) for(int i = 1; i < n; i += 2)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t,n;
    cin>>t;
    while(t--){

        cin >> n;

        if(n % 4 != 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
           for (int i = 1; i <= n/2; ++i) {
			cout << i * 2 << " ";
		}
		for (int i = 1; i < n/2; ++i) {
			cout << i * 2 - 1 << " ";
		}
		cout << 3 * n/2 - 1 << endl;
        }
    }
    return 0;
}    