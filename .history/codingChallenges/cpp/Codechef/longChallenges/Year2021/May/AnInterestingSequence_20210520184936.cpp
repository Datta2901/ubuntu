#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define size int((2 * 1e6) + 1)

int getGcd(int a,int b){
    return __gcd(a,b);
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        vector<int> series;
        for(int i = 1; i <= (2 * k) + 1; i++){
            series.push_back(k + i * i);
            cout << series[i - 1] << " ";
        }
        long long int sum = 0;  
        for(int i = 1; i < (2 * k) + 1; i++){
            sum += getGcd(series[i - 1],series[i]);
        }
        cout << endl;
        cout << sum << endl;
    }
    // diff are 3 5 7 9 11 13 ,,,,,,,,,,,,,,,,,,,,,,
    return 0;
}