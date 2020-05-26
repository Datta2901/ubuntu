#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int LongestIncreasingSubLength( int arr[], int n )  
{  
    int lis[n];    
    lis[0] = 1;    
    /* Compute optimized LIS values in  
       bottom up manner */
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
  
    // Return maximum value in lis[] 
    return *max_element(lis, lis+n); 
}
int main(){
    int size,max_element;
    cin >> size;
    int arr[size];
    for(int i = 0; i< size; i++){
        cin >> arr[i];
    }
    
    max_element = LongestIncreasingSubLength(arr,size);
    cout << max_element << endl;;
    return 0;
}
// int main(){
//     vector<int> data;
//     for(int i = 0; i < 5;i++){
//        data.push_back(i);
//     }
//     int answer = *min_element(data.begin(),data.end());
//     cout << answer << endl;
//     return 0;
// }
