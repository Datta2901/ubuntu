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
#define repeat(n,a) for(int i=a;i<=n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

bool isPalindrome(int i){
vector<int> number;
    while( i != 0){
        number.pb(i % 10);
        i /= 10;
    }
    int *front,*end;
    front = &number[0];
    end = &number[number.size()- 1];
    while(front < end){
        if(*front != *end){
            return false;
        }
    }
    return true;
}

int main(){
    EXECUTE_FASTER
    testcase(){
        int l,r;
        cin >> l >> r;
        vectorint arr[r];
        arr[0] = 1;
        repeat(l,r){
            arr[i] = arr[i - 1];
            if(isPalindrome){
                arr[i] =+ i;
            }
        }
        cout << 
    }
    return 0;
}