#include<bits/stdc++.h>
using namespace std;
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define testcase() int t; cin >> t; while(t--)

int getAnswer(vector<int> infected){
    int answer = 0;
    for(auto inf : infected){
        if(inf == 1){
            answer++;
        }
    }
    return answer;
}

int main(){
    EXECUTE_FASTER
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
            int res = arr.size();
            vector<int>answer(res,1);
            for(int i=0; i< res; i++){
                for(int j = i+1; j < res; j++){
                    if(arr[i] > arr[j])
                        answer[i] += 1;
                }
                for(int j = 0; j < i; j++){
                    if(arr[j] > arr[i])
                        answer[i]+=1;
                }
            }
        int min = INT_MAX,max = INT_MIN;
        for(int i = 0; i < answer.size(); i++){
            if(min > answer[i]){
                min = answer[i];
            }if(max < answer[i]){
                max = answer[i];
            }
        }
        cout << min << " " << max << endl;
        }if(size > 3){
            int res =  arr.size();
            vector<int>infected(res);
            vector<int> dist(res);
            int minimum=INT_MAX, maximum= INT_MIN;
            for(int i=0; i< res; i++){
                vector<int>Zeroes(infected.size());
                infected = Zeroes;
                infected[i] = 1;
                for(int i = 0; i < dist.size(); i++){
                    dist[i] = i;
                }
                int tt = 100;
                while(tt--){
                    for(int j = 0;j < res; j++){
                        dist[j] += arr[j];
                    }
                    unordered_set<int>toKnow(res);
                    vector<int> toI(res);
                    for(int i = 0; i < infected.size(); i++){
                        auto x = infected[i];
                        if ( x == 1){
                            toI.push_back(i);
                        }
                    }
                    
                    for(auto x : toI){
                        toKnow.insert(dist[x]);
                    }
                    for(int j = 0; j < res; j++){
                        if(infected[j]){
                            continue;
                        }
                        if(toKnow.count(dist[j])){
                            infected[j] = 1;
                        }
                    }
                    toKnow.clear();
                }
                int count = 0;
                for(auto x : infected){
                    if(x == 1){
                        count++;
                    }
                }
                if(minimum > count){
                    minimum = count;
                }if(maximum < count){
                    maximum = count;
                }
        }
            cout<<  minimum <<" " << maximum << endl;
        }
    }
    return 0;
}