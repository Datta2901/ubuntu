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
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it =  it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i=1;i<=n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sov.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

int main(){
    testcase(){
        long int a,b;
        cin >> a >> b;
        vector<int> num1,num2;
        while(a != 0){
            num1.pb(a %10);
            a /= 10;
        }
        while(b != 0){
            num2.pb(b % 10);
            b /= 10;
        }
        int num1Size = num1.size(),num2Size = num2.size();
        long long int Sum = 0;
        int  i = 0;
        while(max(num1Size,num2Size) != 0){
            Sum = Sum * 10 + (num1[i] + num2[i]) % 10;
            num1Size--,num2Size--;
            if(num1Size == 0){
                num1[i] == 0
            }
        }
        cout << Sum << endl;
    }

    return 0;
}