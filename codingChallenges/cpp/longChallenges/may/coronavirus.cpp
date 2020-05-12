#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<iterator>
#include<string>
#include<map>
#define MOD 1000000007
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
        EXECUTE_FASTER
        int t;
        cin >> t;
        while(t--){
            
            int n,a,count = 1,min = 1000000,max = 1;
            cin >> n;
            vector<int> dist;
            loop(n){
                cin >> a;
                dist.push_back(a);
            }
            for(int i = 0; i+1 < n; i++){
                if(dist[i+1] - dist[i] <= 2){
                    count++;
                }
                else{
                    if(min >= count )
                        min = count;
                    if(max <= count ){
                        max = count;
                    }
                   count = 1;
                }
            }
                    if(min >= count )
                        min = count;
                    if(max <= count ){
                        max = count;
                    }

       cout << min << " " << max << endl;
        
     
    }
    return 0;
 }    