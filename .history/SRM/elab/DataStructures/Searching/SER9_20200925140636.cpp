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
    cin >> number[i];
    freq.insert(number[i]);
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
  size = countDistinctSubarray(number,size); 
  cout << count << endl; 
  return 0; 
  }

#include <iostream>
using namespace std;
long long int countDistictSubarray(int arr[], int n){
int freq[n],i,j,c;
  for(i=0;i<n;i++)
    freq[i]=-1;
  for(i=0;i<n;i++){
    c=1;
    for(j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        c+=1;
        freq[j]=0;
      }
    }
    if(freq[i]!=0)
      freq[i]=c;
  }

  int count=0;

  for(i=0;i<n;i++){
    if(freq[i]>=1)
      count++;
  }
  return count;
}
int main(){
  int n,i,j,c;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];


  int ct=0,k,counter=0;
  for(i=0;i<n;i++){

    for(j=i;j<n;j++){
      int b[j-i+1];
      for(k=i;k<=j;k++)
        b[k]=arr[k];

      if(countDistictSubarray(b,(j-i+1))==countDistictSubarray(arr,n))

        counter++;
    }
  }
  cout<<counter;
  return 0;
}