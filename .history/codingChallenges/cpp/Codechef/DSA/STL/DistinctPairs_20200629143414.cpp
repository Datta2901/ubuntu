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
    int m,n;
    cin >> m >> n;
    vector< pair<long long int,long long int> >A,B;
    loop(m){
        long  int a;
        cin >> a;
        A.pb(make_pair(a,i));
    }

    loop(n){
        int a;
        cin >> a;
        B.pb(make_pair(a,i)); 
    }

    set<long long int > sum; 
    long long int count = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            count ++;
            int size = sum.size();
            sum.insert(A[])
            cout << A[j].second << " " << B[i].second << endl;
            if(count == m + n - 1){
                return 0;
            }
        }
    }
    return 0;
}