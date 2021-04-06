#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>answer;
        for(int i = 0; i < nums.size(); i++){
            int a = nums[i];
            auto b = find(nums.begin(),nums.end(),target - a);
            if(b-nums.begin() != nums.size()){
                cout << "[" <<  << "," << *b << "]";
            }
        }
    } 
    return   
};

int main(){

}