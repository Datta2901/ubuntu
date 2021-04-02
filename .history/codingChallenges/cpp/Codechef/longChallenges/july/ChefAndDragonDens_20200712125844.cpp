#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#include<unordered_map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}cout << endl;
#define MOD 1000000007
#define ll long  int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(long int i=0;i<n;i++){ long int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

bool isEqual(const pair<long int ,long int> & element, long int find){
    return element.first
}


int main(){
    vector<long int> taste,hei;
    vector<pair<long int,long int> > heights;
    int size;
    cin >> size;
    loop(size){
        long int a;
        cin >> a;
        heights.pb({a,i+1});
        hei.pb(a);
    }
    vectInput(taste,size);
    sort(heights.begin(),heights.end());
    int Queries;
    cin >> Queries;
    while(Queries--){
        long int a,b,c;
        cin >> a >> b >> c;
        if(a == 1){
            taste[b - 1] = c;
        }else{
            long int minimum = min(hei[b],hei[c]),find;
            if(minimum == hei[b]){
                find = b;
            }else{
                find = c;
            }
            vector<pair<long int,long int> > :: iterator  it = find_if(heights.begin(),heights.end(),isbool);
        }

    }


    return 0;
}