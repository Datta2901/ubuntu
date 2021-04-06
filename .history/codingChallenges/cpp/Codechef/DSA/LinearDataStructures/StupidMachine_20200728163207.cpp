#include<bits/stdc++.h>
using namespace std;

void solve(){
     int size, answer,number,min;
     cin >> size >> number;
     answer = number;
     minimum = number;
     for(int i = 1; i < size; i++){
          int a;
          cin >> a;
          minimum = min(a,min);
          answer += min;
     }
	
    cout << answer << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
     

  }
	
