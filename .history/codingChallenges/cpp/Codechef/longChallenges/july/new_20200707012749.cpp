#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#include<unordered_map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

long int RequiredDays(vector<long int> infected,long int cures,long int size){
    vector<long int> :: iterator it = lower_bound(infected.begin(),infected.end(),cures);
    // cout << "lower bound is " <<  it-infected.begin() << endl;
    if(it - infected.begin())
    long int answer = 1,count = 0;
    for(int i = it-infected.begin() ; i < infected.size();){
        if(cures >= infected[i]){
            cures = 2 * infected[i];
            long long int a = it-infected.begin();
            infected.erase(infected.begin(),infected.begin()+ a);
            vector<long int> :: iterator it = lower_bound(infected.begin(),infected.end(),cures);
            count++;
            i = it - infected.begin();
        }else{
            cures = min(cures,infected[i]);
            cures *= 2;
            answer++;
        }
    }
    return answer + (size - count);
}

int main(){
    EXECUTE_FASTER
    testcase(){
        int size;
        long long int cures;
        cin >> size >> cures;
        vector<long int> infected;
        loop(size){
            long int a;
            cin >> a;
            infected.pb(a);
        }
        sort(infected.begin(),infected.end());
        long int days = RequiredDays(infected,cures,infected.size());
        cout << days << endl;
    }
    return 0;
}