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

int main(){
EXECUTE_FASTER
    testcase(){
        int Days;
        cin >> Days;
        vector<int> Schedule,solved;
        loop(Days){
            int a,b;
            cin >> a >> b;
            Schedule.pb(a);
            solved.pb(b);
        }
        int queries;
        cin >> queries;
        loop(queries){
            int days,problems,answer = 0;
            cin >> days >> problems;
            loop(Schedule.size()){
                if(Schedule[i] <= days){
                    answer += solved[i];
                }
            }

            if(answer >= problems){
                cout << "Go Camp" << endl;
            }else{
                cout << "Go Sleep" << endl;
            }
        }

    }
    return 0;
}