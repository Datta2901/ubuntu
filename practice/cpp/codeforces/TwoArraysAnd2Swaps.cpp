#include<iostream>
#include<bits/stdc++.h>
#include<algorithm> 
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
int main(){
    EXECUTE_FASTER
    freopen("input.txt","r",stdin);
    freopen("output.txt","a",stdout);
    int t;
    cin >> t;
    while(t--){
        int n,k,c;
        long long int sum = 0;
        vector<int> a,b;
        cin >> n >> k;
        loop(n){
            cin >> c;
            a.pb(c);
        }

        loop(n){
            cin >> c;
            b.pb(c);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for(int i = 0; i < k && i < n; i ++){
            if(a[i] < b[i] ){
                 a[i] = b[i];
            }  
        }

        loop(a.size()){
            sum += a[i];
        }
        cout << sum << endl;
    }

}