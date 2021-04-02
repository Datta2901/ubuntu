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
        long int a;
        cin >> a;
        B.pb(make_pair(a,i)); 
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    set<long long int > sum; 
    long long int count = 0;
    for(int i = 0; i < m; i++){
        int size = sum.size();
        sum.insert(A[i].first + B[0].first);
        if(sum.size() == size + 1){
            count++;
            cout << A[i].second << " " << B[0].second << endl;
        }
    }

    for(int i = 0; i < n; i ++){
        int size = sum.size();
        sum.insert(A[0].first + B[1].first);
        if(sum.size() == size + 1){
            count++;
            cout << A[0].second << " " << B[i].second << endl;
        }
        if(sum.size() == n + m - 1){
            
        }
    
    }

    return 0;
}