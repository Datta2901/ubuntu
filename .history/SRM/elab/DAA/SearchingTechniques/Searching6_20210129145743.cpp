#include<bits/stdc++.h> 
using namespace std; 
  
void findTriplets(vector<int>arr, int n){ 
    bool found = true; 
    for (int i=0; i<n-2; i++) { 
        for (int j=i+1; j<n-1; j++){ 
            for (int k=j+1; k<n; k++){ 
                if (arr[i]+arr[j]+arr[k] == 0) { 
                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] <<endl; 
                    found = true; 
                } 
            } 
        } 
    } 
  
    if (found == false) 
        cout << " not exist "<<endl; 
  
} 
  
int main() 
{ 
    int n = 5; 
  int arr[n],i;
  for(i=0;i<n;i++) { 
    cin>>arr[i];
  }
    findTriplets(arr, n); 
    return 0; //sujan
}