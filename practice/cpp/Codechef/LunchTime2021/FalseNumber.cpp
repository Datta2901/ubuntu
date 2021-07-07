#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string nums,answer = "";
        cin >> nums;
        if(nums[0] == '1'){
            answer +="10";
            answer += nums.substr(1,nums.size() - 1);
        }else{
            answer +='1';
            answer += nums;
        }
        cout << answer << endl;
    }
    return 0;
}