#include<bits/stdc++.h>
using namespace std;
#define testcase() int t; cin >> t; while(t--)
int main(){
    testcase(){
        int size;
        cin >> size;
        vector<int> velocity,infected;
        velocity.push_back(0);
        for(int i = 1; i  <= size; i++){
            int a;
            cin >> a;
            velocity.push_back(a);
        }
        map<int,vector<int>>time;
        map<int,set<int>> athe;
        int count;
            for(int j = 1; j <= size; j++){
                count = 0; 
                for(int k = 1; k <= size; k++){
                    if(k == j){
                        time[j].push_back(k);
                        time[k].push_back(j);
                        athe[k].insert(j);
                        athe[j].insert(k);
                        count++;
                    }else{
                        if(velocity[k] - velocity[j] != 0){
                            float answer = ((float)((j - k)) / (velocity[k] - velocity[j]));
                            if(answer >= 0){
                                time[j].push_back(k);
                                time[k].push_back(j);
                                athe[k].insert(j);
                                athe[j].insert(k);
                                count++;
                            }
                        }
                    }
                }
                infected.push_back(count);
            }

            for(auto it = athe.begin(); it != athe.end(); it++){
                for(auto ip = time.begin(); ip != time.end(); ip++){
                    for(auto itr = (ip->second).begin(); itr)
                }
            }

            int min = INT_MAX,max = INT_MIN;
            for(int i = 0; i < infected.size(); i++){
                if(min > infected[i]){
                    min = infected[i];
                }if(max < infected[i]){
                    max = infected[i];
                }
            }
        cout << min << " " << max << endl;
    }
    return 0;
}