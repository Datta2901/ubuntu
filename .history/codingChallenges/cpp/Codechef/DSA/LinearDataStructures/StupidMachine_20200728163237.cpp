#include<bits/stdc++.h>
using namespace std;

void solve(){
     int size, answer,number,minimum;
     cin >> size >> number;
     answer = number;
     minimum = number;
     for(int i = 1; i < size; i++){
          int a;
          cin >> a;
          minimum = min(a,minimum);
          answer += minimum;
     }
	
    cout << answer << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
     splve();
  }
}
	
