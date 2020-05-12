#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<iterator>
#include<string>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define testcase() int t;cin >> t; while(t--)
#define endl '\n'
using namespace std;
int main(){

        EXECUTE_FASTER
        testcase(){
        int n,b,answer,sum = 0;
        bool flag = true;
        cin >> n;
        vector<int> a;
        loop(n){

            cin >> b;
            a.pb(b);
            sum = b + sum;
        }

        loop(n){
            if(sum *(n-1) == (sum - a[i])* (n)){
                answer = i + 1;
                cout << answer << endl;
                flag = false;
                break;
            }
        }

        if(flag == true){
            cout << "Impossible\n";
        }
    }
    return 0;
}