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

long int prune_prev(long int start, long int ind, vector<long int> infected){
    if (ind == 0 || ind <= start) {
        return -1;
    }

            cout << "prune prev " << " start = " << start << " ind= " << ind << endl;

    ind--;
    long int req = ind,next_ind;
    while(ind > start){
        if (infected[req] != infected[ind]){
            return ind + 1 <= req ?  ind+1: req;
        }
        else{
            ind--;
        }
    }

    cout << "returning from here" << ind << endl;
    return ind;
}

long int custom_lb(vector<long int> infected, long int val,long int start) {
    if(start == infected.size()) {
        return -2;
    }
    vector<long int> :: iterator it = lower_bound(infected.begin()+start,infected.end(),val);
    cout << "customlb "<<  " start = " <<start << " val= " << val << "it= " <<it-infected.begin() << " *it= " << *it << endl;

    if (val == *it) {
        return it - infected.begin();
    }

    return prune_prev(start, it - infected.begin(), infected);
}

long int daystofill(long int maxnum, long int num){
    long int count =0 ;
    while(num < maxnum) {
        count ++;
        num *= 2;
    }

    return count
}

long int RequiredDays2(vector<long int> infected, long int vaccine) {
    vector<long int> :: iterator it;
    long int start = 0, lb=0;
    long int extraDays=0;
    while(vaccine < infected[infected.size() - 1]) {
        lb = custom_lb(infected, vaccine, start);
        cout << "lb = " << lb << " start = " <<start << " extraDays= " << extraDays << "vaccine= " <<vaccine << endl;
        if(lb == -2) {
            break;
        }
        if (lb == -1){
            vaccine *= 2;
            extraDays++;
        } else{
            if (infected[lb]*4 > vaccine*2){

            }

            vaccine = infected[lb]*2;
            start = lb+1;
        }
    }

    return infected.size()+extraDays;
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
        long int days = RequiredDays2(infected,cures);
        cout << days << endl;
    }
    return 0;
}