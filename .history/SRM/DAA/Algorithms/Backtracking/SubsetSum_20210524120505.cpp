#include<bits/stdc++.h>
using namespace std;



void PrintSubSet(vector<int> result){
    cout << "Total number of subsets are " << result.size() << " -----> " << endl;
    for(auto i : result){
        cout << i << " ";  
    }
    cout << endl;
}


void subset_sum(vector<int> temp,vector<int> result,int temp_size,int result_size,int sum, int pos,int target_sum){   
    if (target_sum == sum ){
        PrintSubSet(result);
        subset_sum(temp, result,temp_size , result_size- 1,sum - temp[pos], pos + 1,target_sum);
        return;
    }
    else{
        for(int i = pos; i < temp.size(); i++){
            result[result.size()] = temp[i];
        }
    }
}
 



void GetSubsets(vector<int>numbers,int Requiredsum){
    int sum = 0;
    vector<int>track(numbers.size(),0);
    subset_sum(numbers,track,sum,Requiredsum,0);
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