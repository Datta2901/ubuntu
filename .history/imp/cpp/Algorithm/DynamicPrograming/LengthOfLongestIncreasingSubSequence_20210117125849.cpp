#include<bits/stdc++.h>
using namespace std;

int LengthOfOncreasingSubsequence(vector<int> arr){
    vector<int> lis(size,0);
    fo
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