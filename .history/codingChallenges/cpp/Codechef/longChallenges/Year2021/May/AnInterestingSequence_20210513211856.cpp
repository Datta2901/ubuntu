#include<bits/stdc++.h>
#include<iostream>
using namespace std;

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
        int ele = k + 1;
        long long int sum = 0;
        for(int i = 2; i <= (2 * k) + 1; i++){
            sum += getGcd(series[i - 1],series[i]);
            series.push_back(k + i * i);
        }
          
        for(int i = 1; i < (2 * k) + 1; i++){
            
        }
        cout << sum << endl;
    }

    return 0;
}