#include <iostream>
#include <bits/stdc++.h>
#include<string>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t,n,counta = 0,countb = 0;
    cin>>t;
    string ballon;
    while(t--){
      getline(cin,ballon);

      for(int i = 0; i < n; i++){
             if(ballon[i] == 'a'){
                    counta++;
             }else{
                 countb++;
             }
        }
       
       cout << min(counta,countb) <<endl;
      }