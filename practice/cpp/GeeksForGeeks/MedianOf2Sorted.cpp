#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>a){
    for(auto it : a){
        cout << it << " ";
    }
    cout << endl;
}

float GetMedian(vector<int> arr1,vector<int> arr2){
    int low = 0,high = arr1.size();
    while(low <= high){
        int i1 = (low + high)/2;
        int i2 = (low + high + 1) / 2 - i1 ;
        if(arr1[1] < arr2[]){

        }
    }

    return 0;
}

int main(){
    vector<int>arr1,arr2;
    int n1,n2;
    cin >> n1 >> n2;
    for(int i = 0; i < n1; i++){
        int a;
        cin >> a;
        arr1.push_back(a);
    }
    for(int i = 0; i < n2; i++){
        int a;
        cin >> a;
        arr2.push_back(a);
    }
    if(arr1.size() < arr2.size()){
        cout << GetMedian(arr2,arr1);
    }else{
        cout << GetMedian(arr1,arr2);
    }
    return 0;
}