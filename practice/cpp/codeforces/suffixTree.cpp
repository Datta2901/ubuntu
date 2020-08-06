//https://codeforces.com/problemset/problem/1281/A
#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string::iterator ip;
        string fili ="po",jap ="desu",japa ="masu",kor ="mnida";
        ip = find_end(str.begin(),str.end(),fili.begin(),fili.end());
        if(ip-str.begin() == str.size()-2){
            cout << "FILIPINO\n";
            continue;
        }
        ip = find_end(str.begin(),str.end(),jap.begin(),jap.end());
        if(ip-str.begin() == str.size()- 4){
            cout << "JAPANESE\n";
            continue;
        }
        ip = find_end(str.begin(),str.end(),japa.begin(),japa.end());
        if(ip-str.begin() == str.size()- 4){
            cout << "JAPANESE\n";
            continue;
        }
        ip = find_end(str.begin(),str.end(),kor.begin(),kor.end());
        if(ip-str.begin() == str.size()- 5){
            cout << "KOREAN\n";
            continue;
        }
    }
    return 0;
}