#include<bits/stdc++.h>
using namespace std;



void PrintSubSet(vector<int> result){
    cout << "Total number of subsets are " << result.size() << " -----> " << endl;
    for(auto i : result){
        cout << i << " ";  
    }
    cout << endl;
}


void subset_sum(int s[], int result[],int s_size, int t_size,int sum, int ite,int const target_sum){
   
    if (target_sum == sum ){
        PrintSubSet(result, t_size);
        subset_sum(s, result, s_size, t_size - 1,sum - s[ite], ite + 1,target_sum);
        return;
    }
    else{
        for(int i = ite; i < s_size; i++){
            result[t_size] = s[i];
             
            subset_sum(s, result, s_size, t_size + 1,sum + s[i], i + 1, target_sum);
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