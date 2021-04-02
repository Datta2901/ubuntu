#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
ll PrefixSum(int i,vector<int> answer,ll sum){
    for(int j = i; i )
}

ll SuffixSum(int i,vector<int> answer,ll sum){

}
int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        ll sum = 0;
        vector<int> answer;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            answer.push_back(a);
            sum += a;
        }

    }


    return 0;
}