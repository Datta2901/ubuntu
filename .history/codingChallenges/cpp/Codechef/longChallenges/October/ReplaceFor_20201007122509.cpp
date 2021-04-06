#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findThePosition(vector<int> numbers,int x,int p){
    int min = INT_MAX,answer;
    for(int i = 0; i < numbers.size,)
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,p,k;
        cin >> n >> x >> p >> k;
        p -= 1;
        vector<int>numbers;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            numbers.push_back(a);
        }
        sort(numbers.begin(),numbers.end());
        if(numbers[p] == x){
            cout << 0 << endl;
            continue;
        }
    }
    return 0;
}