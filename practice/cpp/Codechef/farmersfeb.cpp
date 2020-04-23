#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
bool prime(int c){

    bool flag = false;
    for(int i = 2; i < c;i++){
        
        if( c % i == 0){
           flag = false ;
           break;
        }else{
            flag = true;
        }
    }
return flag;
}

int main(){
    EXECUTE_FASTER;
    int t;
    cin>>t;
    int a,b,c;
    bool flag;
    while(t--){

        cin >> a >> b;
        for(int i = a+b+1; i < 3*(a + b); i++){

            flag  =  prime(i);
            if(flag){
                c = i - (a+b);
                break; 
            }
        }
    
    cout << c << endl; 
    }

    return 0 ;
}    