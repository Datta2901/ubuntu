#include<bits/stdc++.h>
using namespace std;



void PrintSubSet(vector<int> result){
    cout << "Total number of subsets are " << result.size() << " -----> " << endl;
    for(auto i : result){
        cout << i << " ";  
    }
    cout << endl;
}


void subset_sum(int s[], int t[],int s_size, int t_size,
                int sum, int ite,
                int const target_sum){
   
     
    if (target_sum == sum )
    {
         
        // We found subset
        printSubset(t, t_size);
         
        // Exclude previously added item
        // and consider next candidate
        subset_sum(s, t, s_size, t_size - 1,
                   sum - s[ite], ite + 1,
                   target_sum);
        return;
    }
    else
    {
         
        // Generate nodes along the breadth
        for(int i = ite; i < s_size; i++)
        {
            t[t_size] = s[i];
             
            // Consider next level node (along depth)
            subset_sum(s, t, s_size, t_size + 1,
                       sum + s[i], i + 1, target_sum);
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