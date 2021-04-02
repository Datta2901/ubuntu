#include<bits/stdc++.h> 
using namespace std; 
  
void findTriplets(vector<int>arr, int n){ 
    bool skip = true; 
    for (int i=0; i<n-2; i++) { 
        for (int j=i+1; j<n-1; j++){ 
            for (int k=j+1; k<n; k++){ 
                if (arr[i]+arr[j]+arr[k] == 0){ 
                    cout << arr[i] << " " << arr[j] << " " << arr[k] <<endl; 
                    skip = true; 
                } 
            } 
        } 
    } 
  
    if (skip == false){ 
        cout << " not exist "<< endl; 
    }
  
} 
  
int main() 
{  
    vector<int>arr;
    for(int i = 0;i < 5; i++) { 
        cin >> arr[i];
    }
    findTriplets(arr); 
    return 0; //sujan
}