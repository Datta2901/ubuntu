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

typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;


string DeleteCommon(string str,string pattern){
unordered_map<char,int> freq;
for(int i = 0; i < pattern.size(); i++){
    freq[pattern[i]]++;
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
// EXECUTE_FASTER
testcase(){
    string mainString,pattern,string1,string2;
    cin >> mainString >> pattern;
    mainString = DeleteCommon(mainString,pattern);
    mainString += pattern[0];
    sort(mainString.begin(),mainString.end()); 
    // cout << str << endl;
    int index = mainString.find(pattern[0]);
    int index2 = mainString.find_last_of(pattern[0]);

    for(int i = 0; i < index2 ; i++){
        if(mainString[i] != '0'){
            string2 += mainString[i];
        }
    }
    string2 += pattern;
    for(int i = index2 + 1; i < mainString.size(); i++){
        if(mainString[i] != '0'){
            string2 += mainString[i];
        } 
    }
    for(int i = 0; i < index ; i++){
        if(mainString[i] != '0'){
            string1 += mainString[i];
        }
    }
    string1 += pattern;
    for(int i = index + 1; i < mainString.size(); i++){
        if(mainString[i] != '0'){
            string1 += mainString[i];
        } 
    }
    vector<string>a;
    a.pb(string1);
    a.pb(string2);
    sort(a.begin(),a.end());
    cout << a[0] << endl;
}
return 0;
}