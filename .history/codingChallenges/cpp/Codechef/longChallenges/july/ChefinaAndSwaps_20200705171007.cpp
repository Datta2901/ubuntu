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
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
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

int main(){
    testcase(){
        int size;
        cin >> size;
        unordered_map<long int ,long int> freA,freB;
        loop(size){
            long int a;
            cin >> a;
            freA[a]++;
        }
        loop(size){
            long int a;
            cin >> a;
            freB[a]++;
        }
        vector<pair<long int,long int> >A,B;
        bool flag = true;
        for(unordered_map<long int ,long int> :: iterator it = freA.begin(); it != freA.end(); i++){
            if(freB[it->first] == it->second){
                    ;
            }else if(freB[it->first] > it->second){
                A.pb({it->first,(freB[it->first] - it->second)});
            }else{
                B.pb(it->first,(it->second,))
            }

        }  
    }
    return 0;
}