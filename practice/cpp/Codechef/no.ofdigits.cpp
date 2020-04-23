#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
     int n,answer ;
     cin >> n;
      for (answer= 0 ;n !=0;n=n/10,answer++)
      {     ;}  
      if(answer == 1 ){
          cout << "1" << endl;
      }else if(answer == 2){
          cout << "2" << endl;
      }else if(answer == 3){
          cout << "3" << endl; 
      }else{
          cout << "More than 3 digits" <<endl;
      }
    return 0;
}       
    