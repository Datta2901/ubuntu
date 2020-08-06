//https://codeforces.com/problemset/problem/1230/A
#include<bits/stdc++.h>
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
        vector<int> candies;
        for(int i = 0; i < 4; i++){
            int a; cin >> a;
            candies.pb(a);
        }
        inc_sort(candies);
        if((candies[0] + candies[3] == candies[1] + candies[2]) || (candies[0] + candies[2] == candies[1] + candies[3])|| candies[3] ==candies[0] + candies[1] + candies[2]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    return 0 ;
}
