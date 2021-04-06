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

pair<int,int> pairinsert(){
    long int x,y;
    cin >> x >> y;
    return {x,y};
}

void printPair(pair<long int,long int> print){
    cout  << print.first << " " << print.second << endl;
}


long long int Distance(pair<long int,long int> a,pair<long int, long int> b){
    return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

pair<long int,long int> RequiredVertex(pair<long int,long int> a,pair<long int, long int> b,pair<long int,long int> c){
    return {b.first + c.first - a.first,b.second + c.second - a.second};
}

int main(){
     EXECUTE_FASTER
    testcase(){
        pair<long int,long int> a,b,c,d;
        long long  int AB,BC,CA;
        a = pairinsert();
        b = pairinsert();
        c = pairinsert();
        AB = Distance(a,b);
        BC = Distance(b,c);
        CA = Distance(c,a);
        ll maximum = max(max(AB,BC),CA);
        if(maximum == AB){
           d =  RequiredVertex(c,a,b);
        }else if(maximum == BC){
            d = RequiredVertex(a,b,c);
        }else{
            d = RequiredVertex(b,a,)
        }
    }
    return 0;
}