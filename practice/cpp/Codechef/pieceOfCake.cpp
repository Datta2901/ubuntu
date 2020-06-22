#include<bits/stdc++.h>
#include<vector>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;

int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        int sum = 0;
        string str;
        cin >> str;
        vector<int> occurences;vector<char> word;
        set<char> chars;
        loop(str.size()){
            chars.insert(str[i]);
            word.pb(str[i]);    
        }
        for(set<char> ::iterator it = chars.begin(); it != chars.end();it++){
            occurences.pb(count(word.begin(),word.end(),*it));
        }
        inc_sort(occurences);
        loop(occurences.size() - 1){
            sum += occurences[i];
        }
        if(sum == occurences[occurences.size()-1]){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}