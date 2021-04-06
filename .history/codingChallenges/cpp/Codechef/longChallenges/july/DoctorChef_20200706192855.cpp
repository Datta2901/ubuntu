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

long int RequiredDays(vector<long int> infected,long int cures,int nearer,unordered_map<long int,long int> freq){
    long int answer = 1;
    // cout << "answer is  " <<  answer <<  " ";
    for(int i = nearer; i < infected.size();){
        cures = min(cures,infected[i]);
        if(cures >= infected[i]){
            answer += (freq[infected[i]] - 1);
            // cout <<  freq[infected[i]] - 1 << " ";
            i++;
        }else{
            answer++;
            // cout << 1 << " ";
            cures = 2 * cures; 
        }   
    }
    // cout << endl;
    return answer;
}

int main(){
    EXECUTE_FASTER
    testcase(){
        int size;
        long long int cures;
        cin >> size >> cures;
        vector<long int > infected;
        unordered_map<long int,long int> freq;
        loop(size){
            long int a;
            cin >> a;
            infected.pb(a);
            freq[a]++;
        }
        sort(infected.begin(),infected.end());
        vector<long int > :: iterator itr = unique(infected.begin(),infected.end());
        infected.resize(distance(infected.begin(),itr));
        // printVect(infected,long int);
        vector<long int > :: iterator it = lower_bound(infected.begin(),infected.end(),cures);
        // cout <<" lower_bound "<< (it-infected.begin()) << " value is " << *it  << endl;
        long int days ;
        if(infected.size() == 1 && it-infected.begin() == 1){
            long int days = RequiredDays(infected,cures,0,freq);
        }else{
            days = RequiredDays(infected,cures,(it- infected.begin()),freq);
        }
        if(it-infected.begin() == infected.size()){
            cout << days + it - infected.begin() - 1 << endl;
            continue;
        }
        long long int answer = days;
        for(int i = 0; i < *it; i++){
            if(freq[i] > 1){
                answer += freq[i]
            }
        }
        cout << days +(it - infected.begin()) << endl;
    }
    return 0;
}
