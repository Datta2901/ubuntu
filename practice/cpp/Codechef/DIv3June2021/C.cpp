#include<bits/stdc++.h>
using namespace std;



int main(){
    long long t;
    cin >> t;
    while(t--){
        long long size;
        cin >> size;
        map<string,long long>freq;
        for(long long i = 0; i < 3 * size; i++){
            string a;
            long long b;
            cin >> a >> b;
            freq[a] += b;
        }
        vector<long long>answer;
        
        for(auto it : freq){
            answer.push_back(it.second);
        }
        sort(answer.begin(), answer.end());
        // for(auto it : answer){
        //     cout << it  << " ";
        // }
        for(int i = 0; i < answer.size(); i++){
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    return 0;
}