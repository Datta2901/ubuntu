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
#define ll  long long int 
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


ll minAbsoluteIndex(vector<ll> infected,ll cures,ll nearer){
    ll minimum = 1e10,index = nearer + 1;
    for(ll i = (nearer + 1); i < infected.size();i++){
        if(minimum >= abs(cures-infected[i])){
            minimum = cures-infected[i];
            index = i;
        }
    }
    return index;
}

long long int RequiredDays(vector<long long int> infected,long long int cures,int nearer){
  long long int extraDays = 0;
  
  for(int i = nearer ; i < infected.size();){
      if(cures >= infected[i]){
          cures = 2 * infected[i];
        //   cout << cures << " " ;
        //   i = minAbsoluteIndex(infected,cures,i);
        //   cout << " mimAbsoluteIndex is " << i << "value "<< infected[i] << endl;
        i++;
      }else{
          if(i > 0){
              for(int j = i; j >= 0; j--){
                if(2 * infected[i - 1] >= infected[i]){
                    cures = 2 *infected[i - 1];
                    cout << cures << endl;
                    break; 
                    }
                }
          }
         
          cures *= 2;
          extraDays++; 
          cout << "ExtraDays "<<  extraDays << " cures " << cures << endl;
      }
  }
    return extraDays;
}
int main(){
    EXECUTE_FASTER
    testcase(){
        int size;
        long long  int cures;
        cin >> size >> cures;
        vector<long long int > infected;
        loop(size){
            long long int a;
            cin >> a;
            infected.pb(a);
        }
        sort(infected.begin(),infected.end());
        printVect(infected,long long int);
        vector<long long int > :: iterator it = lower_bound(infected.begin(),infected.end(),cures);
        cout <<" lower_bound "<< (it-infected.begin()) << " value is " << *it  << endl;
        long long int days;
        days = RequiredDays(infected,cures,(it- infected.begin()));
        cout << size + days << endl;
       
    }
    return 0;
}

// 1 
// 4 20
// 1 10 11 41
// 6f
// ca:5

// 1 
// 6 9 
// 5 10 125 335 980 1000
// 12
// 11 ca

// 1
// 9 7
// 2 4 5 6 8 24 26 31 92
// 12
// ca 11