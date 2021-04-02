#include<bits/stdc++.h>
using namespace std;
#define testcase() int t; cin >> t; while(t--)
int main(){
    testcase(){
        int size;
        cin >> size;
        vector<int> velocity,arr;
        velocity.push_back(0);
        for(int i = 1; i  <= size; i++){
            int a;
            cin >> a;
            velocity.push_back(a);
            arr.push_back(a);
        }
        if(size == 3){
            map<pair<int,int>,float>time;
            map<int,set<int>> athelet;
            vector<int>infected;
            int count;
            for(int j = 1; j <= size; j++){
                count = 0; 
                for(int k = 1; k <= size; k++){
                    if(k == j){
                        athelet[k].insert(j);
                        athelet[j].insert(k);
                        count++;
                    }else{
                        if(velocity[k] - velocity[j] != 0){
                            float answer = ((float)((j - k)) / (velocity[k] - velocity[j]));
                            if(answer >= 0){
                                time[{j,k}] = answer;
                                time[{k,j}] = answer;
                                athelet[k].insert(j);
                                athelet[j].insert(k);
                                count++;
                            }
                        }
                    }
                }
                infected.push_back(count);
            }

            for(auto it = athelet.begin(); it != athelet.end(); it++){
                for(auto ip = it->second.begin(); ip != (it->second).end(); ip++){
                    for(auto itr = athelet[*ip].begin(); itr != athelet[*ip].end(); itr++){
                        if(time[{it->first,*ip}] < time[{*ip,*itr}] && time[{*ip,*itr}] != 0){
                            athelet[it->first].insert(*itr);
                            athelet[*itr].insert(it->first);
                        }
                    }
                }
            }

                //  for(auto it = athelet.begin(); it != athelet.end(); it++){
                //     cout << it->first << " --------------> ";
                //         for(auto ip = (it->second).begin(); ip != (it->second).end(); ip++){
                //             cout << *ip << " ";
                //         }
                //     cout << endl;
                // }

            for(auto it = athelet.begin(); it != athelet.end(); it++){
                infected.push_back((it->second).size());
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
        }if(size > 3){
            int l= arr.size();
            vector<int>infected;
            vector<int> dist(l);
            int min_=INT_MAX, max_= INT_MIN;
            
            for(int i=0; i<l; i++){
                for(int j = 0; j < l; j++){
                    infected[j] = 0;
                }
                infected[i] = 1;
                for(int i = 0; i < dist.size(); i++){
                    dist[i] = i;
                }
                int loop=100;
                while(loop--)
                {
                    for(int j=0; j<l; j++)
                    {
                        dist[j] += arr[j];
                    }
                    unordered_set<int>hashset;
                    vector<int> alreadyinfected;
                    for(int i=0; i<infected.size(); i++){
                        auto x = infected[i];
                        if ( x==1){
                            alreadyinfected.push_back(i);
                        }
                    }
                    
                    for(auto x : alreadyinfected){
                        hashset.insert(dist[x]);
                    }
                    for(int j=0; j<l; j++){
                        if(infected[j]){
                            continue;
                        }
                        if(hashset.count(dist[j])){
                            infected[j]=1;
                        }
                    }
                    hashset.clear();
                }
                 ll count = 0;
    for(auto x :arr)
    {
        if(x == 1)
        {
            count++;
        }
    }
                ll ans = getcountofone(infected);
                min_=min(min_,ans);
                max_=max(max_,ans);
        }
        cout<<min_<<" "<<max_<<endl;
    
        }
    }
    return 0;
}