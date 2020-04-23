#include <iostream>
#include <bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t;
    cin>>t;
    vector<int> 
    
    arr= {2048,1024,512,256,128,64,32,16,8,4,2,1};
    while(t--){
        long long int n,w;
        int a = 0,q =0;
        cin >> n;
        for(int i = 0;n > 0; n = n % arr[a],a++){
            q += n/arr[a];;
        }

        cout<< q <<endl;
    }
    return 0;
}

