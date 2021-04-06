#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findThePosition(vector<int> numbers,int x,int p){
    int min = INT_MAX,answer;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] == x){
            if(min > abs(p - i)){
                min = abs(p - i);
                answer = i;
            }
        }
    }
    return answer;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,p,k;
        cin >> n >> x >> p >> k;
        p -= 1,k -= 1;
        vector<int>numbers;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            numbers.push_back(a);
        }
        sort(numbers.begin(),numbers.end());
        int pos = findThePosition(numbers,x,p),answer = 0;
        if(numbers[pos] != x){
            numbers[k] == x;
            sort(numbers.begin(),numbers.end());
            answer++;
        }
        if(p > k && numbers[p] > x || (p < k && numbers[p] < x)){
            cout << -1 << endl;
            continue;
        }
        if(numbers[p] == x){
            cout << answer << endl;
            continue;
        } 
        pos = findThePosition(numbers,x,p);
        cout << (abs(pos - p) + answer)  << endl;
    }
    return 0;
}