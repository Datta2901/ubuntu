#include<bits/stdc++.h>
using namespace std;



void PrintSubSet(vector<int> result){
    cout << "Total number of subsets are " << result.size() << " -----> " << endl;
    for(auto i : result){
        cout << j << " ";  
    }
    cout << endl;
}


void GetPossiblities(vector<int>numbers,int sum,int Requiredsum,vector<int>track,int pos){
    pos++;
    if(sum == Requiredsum){
       PrintSubSet(tra)
        GetPossiblities();
        return;
    }else{
        for(int i = pos; i < numbers.size(); i++){
            
        }
    }
}




void GetSubsets(vector<int>numbers,int Requiredsum){
    int sum = 0;
    vector<int>track(numbers.size(),0);
    GetPossiblities(numbers,sum,Requiredsum,track,0);
    track.clear();
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