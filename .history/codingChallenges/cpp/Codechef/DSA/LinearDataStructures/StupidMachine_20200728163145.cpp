#include<bits/stdc++.h>
using namespace std;

void solve(){
     
}

int main(){
  int t;
  cin >> t;
  while(t--){
     int size, answer,number,min;
     cin >> size >> number;
     answer = number;
     min = number;
     for(int i = 1; i < size; i++){
          int a;
          cin >> a;
          min = min(a,min);
          answer += min;
     }
	
    cout << answer << endl;

  }
	
