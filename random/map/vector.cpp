#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<iterator>
#include<string>
#include<map>
#define loop(n) for(int i=0;i<n;i++)
#define testcase() int t;cin >> t; while(t--)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define auto  vector<int> :: iterator 
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    map<int,vector<int> > data;
    int a,b;
    testcase(){ 
        
        cin >> a >> b;
        data[a].push_back(b);
    }

    for(map<int,vector<int> > :: iterator it = data.begin();it != data.end();it++){
        cout << it->first <<endl;//it->first
        for(vector<int>::iterator it2 = it->second.begin();it2 < it->second.end();it2++){
            cout << *it2 << " ";
        }
        cout << endl;
    }

    return 0 ;
}