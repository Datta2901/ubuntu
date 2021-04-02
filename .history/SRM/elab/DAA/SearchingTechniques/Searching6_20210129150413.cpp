#include<bits/stdc++.h> 
using namespace std; 
  
void findTriplets(vector<int>arr){ 
    bool skip = true; 
    for (int i = 0; i < arr.size()-2; i++) { 
        for (int j = i + 1; j < arr.size() - 1; j++){ 
            for (int k = j + 1; k < arr.size(); k++){ 
                if (arr[i] + arr[j] + arr[k] == 0){ 
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
        cin >> a;
    }
    findTriplets(arr); 
    return 0; 
}