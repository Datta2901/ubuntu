#include<bits/stdc++.h>
#define  ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll a[n + 1];

    }
    return 0;
}

long long int getArguments(vector<int> answer,int index){
    map<int,int> freq;
    long long int count = 0;
    for(int i = 0; i < answer.size(); i++){
        freq[answer[i]]++;
    }
    for(auto ip = freq.begin(); ip != freq.end(); ip++){
        if(ip -> second > 1){
            count += ip->second;
        }
    }
    return count;
}
