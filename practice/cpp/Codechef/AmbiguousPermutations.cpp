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
#define loop(n) for(int i=1;i<=n;i++)
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
    int size = 10;
    while(size != 0){
        cin >> size;
        if(size == 0){
            break;
        }
        bool flag = true;
        int b;
        vector<int>answer;
        loop(size){
            int a;
            cin >> a;
            answer.pb(a);
        }

        for(int i = 0; i < answer.size(); i++){
            if((i + 1) != answer[answer[i] - 1]){
                flag = false;
            } 
        }

        if(flag){
            cout << "ambiguous" << endl;
        }else{
            cout << "not ambiguous" << endl;
        }
    }
    return 0;
}