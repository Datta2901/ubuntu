#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it =  it !=vect.end();it++){cout << *it << " ";}
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
    EXECUTE_FASTER
    testcase(){
        string s;
        cin >> s;
        vector<int> Occurences;
        set<int> chars;
        loop(s.size()){
            chars.insert(s[i]);
        }
        for(auto it = chars.begin(); it != chars.end(); it++){
                Occurences.pb(count(s.begin(),s.end(),*it));
        }
        inc_sort(Occurences);
        bool flag = false;
        for(int i = 3; i < Occurences.size(); i++){
            if(Occurences[i] == Occurences[i - 1] + Occurences[i - 2]){
                flag = true;
            }else{
                flag = false;
                break;
            }
        }
        printVect(Occurences,int,);
        if(flag){
            cout << "Dynamic" <<endl;
        }else{
            cout << "Not" << endl;
        }
    }
    return 0;
}