#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t,n,a;
    cin>>t;
    while(t--){
        set<char> tickets;
        string a;
        cin >> a;
        char s;
        for(int i =0; i < a.length(); i++){
            tickets.insert(a[i]);
        }
        if(tickets.size() == 2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}    