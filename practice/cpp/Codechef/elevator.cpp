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
        int distance, staiv,lifv;
        cin >> distance >> staiv >> lifv;

        if(sqrt(2)*staiv > lifv ){
            cout << "Stairs\n";
        }else{
            cout << "Elevator\n";
        }








    }
    return 0;
}        