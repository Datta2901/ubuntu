#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t,n,a;
    cin>>t;
    while(t--){
        vector<long long int>numbers;
        cin >> n;
        loop(n){
            cin >> a;
            numbers.pb(a);
        }

        sort(numbers.begin(),numbers.end());

        cout << (n-1)*numbers[0] << endl;
    }
    return 0;
}    