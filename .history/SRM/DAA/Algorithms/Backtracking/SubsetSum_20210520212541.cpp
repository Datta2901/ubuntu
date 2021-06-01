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


void GetPossiblities(vector<int>numbers,int sum,int Requiredsum,vector<int>track,int pos){
    
}




void GetSubsets(vector<int>numbers,int Requiredsum){
    int sum = 0;
    vector<int>track(numbers.size(),0);
    GetPossiblities(numbers);
}

int main(){
    int size,Requiredsum;
    cin >> size >> Requiredsum;
    vector<int>numbers;
    for(int i = 9; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }



    return 0;
}