#include<bits/stdc++.h> 
using namespace std;
set<int>freq; 
long long int countDistinctSubarray(vector<int> arr,int size){ 
 
   return count;
 } 
int main(){
  int size; 
  cin >> size; 
  vector<int> number;
  for(int i = 0; i < size; i++){
    int a; cin >> a;
    number.push_back(a); 
    freq.insert(a);
  } 
  
  cout << countDistinctSubarray(number,number.size()) << endl; 
  return 0; 
  }
