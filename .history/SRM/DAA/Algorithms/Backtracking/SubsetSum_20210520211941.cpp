#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > result;

void PrintSubSet(){
    cout << "Total number of subsets are " << result.size() << " -----> " << endl;
    for(auto i : result){
        cout << i.size() << "-------------> " << endl; 
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    
}


void GetSubsets(vector<int>numbers){
    int sum
}

int main(){
    int size;
    cin >> size;
    vector<int>numbers;
    for(int i = 9; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }



    return 0;
}