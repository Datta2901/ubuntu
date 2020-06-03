//https://codeforces.com/problemset/problem/1360/B
#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i=0;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define testcase() int t; cin >> t; while(t--)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define dec_sort(v) sort(v.begin(),v.end(),greater<int>())
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
    int size,a;
    testcase(){
        cin >> size;
        vec(int) list,diff;
        loop(size){
            cin >> a;
            list.pb(a);
        }
        a = 0;
        inc_sort(list);
        for(int i = 0; i+1 < size; i++){
            if(list[i+1] - list[i] >= 0){
                 diff.pb(list[i+1]-list[i]);
            }
        }
        a = list[size-1]-list[0];
        loop(diff.size()){
            if(a > list[i+1] - list[i]){
                a = list[i+1] -list[i];
            }
        }
        cout << a << endl;
    }
    return 0;
 }