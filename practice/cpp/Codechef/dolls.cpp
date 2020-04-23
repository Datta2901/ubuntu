#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t,n,a,c;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n] ={0};
        vector<int> dolls;
        for(int i = 0;i < n; i++){
            cin >> a;
            dolls.push_back(a);
            arr[dolls[i]-1] += 1;  
        }

        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                c= i+1;
                break;
            }
        }
        cout << c << endl;  

    }  
return 0;
}    