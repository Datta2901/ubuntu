
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
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i=0;i<n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

bool isAlternate(string s){
    loop(s.size() - 2){
        if(s[i] != s[i + 2]){
            return false;
        }
    }if(s[0] == s[1]){
        return false;
    }
    return true;
}

int main(){
    testcase(){
        string str;
        cin >> str;
        set<char> answer;
        loop(str.size()){
            answer.insert(str[i]);
        }
        if(answer.size() == 1 ||( str.size() == 2 && answer.size() == 2) ){
            cout << "YES" << endl;
            continue;
        }else if(str.size() % 2 == 0 && answer.size() == 2){
            if(isAlternate(str)){
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}