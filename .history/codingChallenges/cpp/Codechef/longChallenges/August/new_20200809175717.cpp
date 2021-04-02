//  https://www.codechef.com/AUG20B/problems/SKMP,
#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define vv vector
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
#define MOD 1000000007
#define ll long long int 
#define l long int
#define loop(n)for(int i = 0; i < n; i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)


string common(string str,string patt){
unordered_map<char,int> freq;
for(int i = 0; i < patt.size(); i++){
    freq[patt[i]]++;
}

for(int i = 0; i < str.size(); i++){
    if(freq[str[i]] > 0){
        freq[str[i]] -= 1;
        str[i] = '0';
    }
}
return str;
}

int main(){
testcase(){
    string str,patt,requiredAnswer,anotherString;
    cin >> str >> patt;
    str = common(str,patt);
    str += patt[0];
    sort(str.begin(),str.end()); 
    // cout << str << endl;
    int index = str.find(patt[0]);
    int index2 = str.find_last_of(patt[0]);

    for(int i = 0; i < index2 ; i++){
        if(str[i] != '0'){
            anotherString += str[i];
        }
    }
    anotherString += patt;
    for(int i = index2 + 1; i < str.size(); i++){
        if(str[i] != '0'){
            anotherString += str[i];
        } 
    }
    for(int i = 0; i < index ; i++){
        if(str[i] != '0'){
            requiredAnswer += str[i];
        }
    }
    requiredAnswer += patt;
    for(int i = index + 1; i < str.size(); i++){
        if(str[i] != '0'){
            requiredAnswer += str[i];
        } 
    }
    vector<string>answer;
    answer.pb(requiredAnswer);
    answer.pb(anotherString);
    sort(answer.begin(),answer.end());
    cout << answer[0] << endl;
}
return 0;
}