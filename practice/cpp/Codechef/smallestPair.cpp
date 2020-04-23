#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t;
    cin>>t;
    while(t--){
        vector< long long int >numbers;
        long long int n,a;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a;
            numbers.push_back(a);
        }
 
        sort(numbers.begin(),numbers.end());

        cout << numbers[0] + numbers[1] << endl;
    }

    return 0;
}