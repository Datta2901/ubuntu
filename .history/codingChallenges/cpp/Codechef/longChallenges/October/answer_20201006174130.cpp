#include<bits/stdc++.h>
using naemspace std;
int main(){
    int n,x,p,k;
    cin >> n >> x >> p >> k;
    vector<int>numbers;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    sort(numbers.begin(),numbers.end());
    
      
    return 0;
}