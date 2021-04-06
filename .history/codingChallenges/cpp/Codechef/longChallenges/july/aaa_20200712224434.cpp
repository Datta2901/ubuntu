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
#define printVectofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
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

long int longest(vector<long int> height,vector<long int> taste,long int start,long int end){
    long long int sum = 0;
    vector<long int> lis; 
    vector<long int> :: iterator it;
    int query = height[end];
    for(int i = start; i <= end; i++){
        it = lower_bound(lis.begin(),lis.end(),height[i]);
        if((it == lis.end() && height[i] <= height[end]) || height[i] == *it){
            lis.push_back(height[i]);
            sum += taste[i];
        }
    }
    cout << sum << endl;    
   return sum;     
}

long int requiredSum(vector<long int> height,vector<long int> taste,long int start,long int end){
    if(height[start] > height[end]){
        return -1;
    }
    cout << "here " << endl;
    return longest(height,taste,start,end);
}

int main(){
    vector<long int> taste,height;
    int size,Queries;
    cin >> size >> Queries;
    loop(size){
        long int a;
        cin >> a;
        height.pb(a);
    }
    vectInput(taste,size);
    // printVect(taste,long int); 
    while(Queries--){
        long int a,b,c,answer;
        cin >> a >> b >> c;
        if(a == 1){
            taste[b - 1] = c;
        }else{
            cout << answer << " ";
           answer = requiredSum(height,taste,b - 1,c - 1);
        }
        cout << answer << endl;
    }

    return 0;
}