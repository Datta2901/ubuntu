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
#define printVect(vect,dataStruct)for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++)  {cout << *it << " ";} cout << endl;
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

long int daystofill(long int maxnum, long int num){
    long int count =0 ;
    while(num < maxnum) {
        count ++;
        num *= 2;
    }

    return count;
}

long int RequiredDays2(vector<long int> infected, long int vaccine, long int original_vaccine) {
    auto it = lower_bound(infected.begin(), infected.end(), vaccine/2);
    if (*it <= original_vaccine) {
        return 0;
    }

    if (vaccine <= original_vaccine) {
        return 0;
    }

    if (*it >= vaccine/2) {
        return RequiredDays2(infected, *it, original_vaccine);
    } else{
        return 1 + RequiredDays2(infected, vaccine/2, original_vaccine);
    }
}

int main(){
    // EXECUTE_FASTER
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
        long int initialDays = daystofill(infected[infected.size()-1],cures)+infected.size();
        long int days = RequiredDays2(infected,infected[infected.size() -1], cures);
        cout << min(days, initialDays) << endl;
    }
    return 0;
}