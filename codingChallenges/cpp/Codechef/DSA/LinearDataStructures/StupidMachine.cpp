// https://www.codechef.com/LRNDSA02/problems/STUPMACH
#include<bits/stdc++.h>
using namespace std;

void solve(){
     long int size, answer,number,minimum;
     cin >> size >> number;
     answer = number;
     minimum = number;
     for(int i = 1; i < size; i++){
          long int a;
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
     solve();
  }
}
	
