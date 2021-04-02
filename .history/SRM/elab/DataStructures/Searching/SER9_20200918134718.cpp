#include<bits/stdc++.h> 
using namespace std;
long long int countDistinctSubarray(int arr[],int n){ 
   return n;
} 
int main(){
  int size; 
  cin >> size; 
  int number[size];
  set<int>freq; 
  for(int i = 0; i < size; i++){
    number[i]
    freq.insert(a);
  } 
  long long int count = 0;
   set<int>sub;
   for(int i = 0; i < size; i++){ 
     sub.clear(); 
    for(int j = i; j < size; j++){
      sub.insert(number[j]);
      if(sub.size() == freq.size()){ 
        count++;                           
      }
    }
   }
  size = countDistinctSubarray(number,number.size()) 
  cout << count << endl; 
  return 0; 
  }
