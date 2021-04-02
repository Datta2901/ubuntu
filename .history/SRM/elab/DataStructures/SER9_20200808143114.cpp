#include<bits/stdc++.h> 
using namespace std;
set<int>freq; 
long long int countDistinctSubarray(vector<int> arr,int size){ 
long long int count = 0;
   set<int>sub;
   for(int i = 1; i < size; i++){ 
     sub.clear(); 
    for(int j = 0; j < i; j++){
      sub.insert(arr[j]);
      if(sub.size() == freq.size()){ 
        count++;                           
      }
    }
   } 
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
  return 0; }