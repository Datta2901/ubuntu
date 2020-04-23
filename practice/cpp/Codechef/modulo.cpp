#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int n,a;
    while(t--){
        cin >> n;
        vector<int> numbers(n);
        for(int i = 0; i < n; i++){
            cin >> a;
             numbers.push_back(a);
        }

        sort(numbers.begin(), numbers.end());

        cout << numbers[0] << endl;
    }
    return 0 ;
}