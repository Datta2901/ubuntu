#include<bits/stdc++.h>
using namespace std;

int LengthOfIncreasingSubsequence(vector<int> arr){
    vector<int> lis(arr.size(),1);
    for(int i = 1; i < arr.size(); i++){
        for(int j = 0; j < i; j++){
            if(arr[i] < arr[j] && lis[j] ){

            }
        }
    }
}


int main(){
    int size;
    cin >> size;
    vector<int> arr;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << LengthOfIncreasingSubsequence(arr) << endl;

    return 0;
}