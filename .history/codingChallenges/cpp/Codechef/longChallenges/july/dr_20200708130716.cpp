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
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}cout << endl;
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

long int RequiredDays(vector<long int> infected,long int cures,int nearer,unordered_map<long int,long int> freq){
  
    // cout << answer << endl;
    return answer;
}

int main(){
    EXECUTE_FASTER
    testcase(){
        int size;
        long long int cures;
        cin >> size >> cures;
        vector<long int > infected;
        loop(size){
            long int a;
            cin >> a;
            infected.pb(a);
        }
        sort(infected.begin(),infected.end());
        vector<long int > :: iterator itr = unique(infected.begin(),infected.end());
        infected.resize(distance(infected.begin(),itr));
        // printVect(infected,long int);
        vector<long int > :: iterator it = lower_bound(infected.begin(),infected.end(),cures);
        // cout <<" lower_bound "<< (it-infected.begin()) << " value is " << *it  << endl;
        // cout << answer << " ";
        long int answer = 0;
        days = RequiredDays(infected,cures,(it- infected.begin()));
        if(it-infected.begin() == 0){
            cout << days << endl;
            continue;
        }
        if(infected.size() == 1){
            cout << answer << endl;
            continue;
        }
        if(it - infected.begin() == infected.size()){
            answer -= 1;
        }
        // cout << days << endl;
            cout << days + answer  << endl;
       
    }
    return 0;
}