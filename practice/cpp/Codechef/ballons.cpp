#include <iostream>
#include <bits/stdc++.h>
#include<c++/5/bits/stl_multiset.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t,n,counta = 0,countb = 0;
    cin>>t;
    char  arr;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
             cin >> arr ;
             if(arr == 'a'){
                    counta++;
             }else{
                 countb++;
             }
        }
       
       cout << min(counta,countb) <<endl;
       
    }
    return 0;
}      