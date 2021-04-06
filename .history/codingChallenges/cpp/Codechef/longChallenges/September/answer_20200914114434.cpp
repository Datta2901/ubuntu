#include<bits/stdc++.h>
using namespace std;
void getdistance(vector<int> &distance){
    int resize= distance.size();
    for( int i = 0; i < resize; i++){
        distance[i]=i;
    }
}
void getinfected(vector<int> &infected, int n){
    vector<int>temp(infected.size(),0);
    infected = temp;
    infected[n]=1;
}
 
vector<int> GetpresentCases(vector<int> &infected){
    vector<int>out;
    for(int i=0; i<infected.size(); i++){
        auto x = infected[i];
        if ( x==1){
            out.push_back(i);
        }
    }
    return out;
}
int getAnswer(vector<int> &velocity){
    int count=0;
    for(auto x :velocity){
        if(x ==1){
            count++;
        }
    }
    return count;
}

void greaterThan3(vector<int> &velocity){
    int resize = velocity.size();
    vector<int>infected(resize,0);
    vector<int> distance(resize,0);
    int minimum = INT32_MAX;
    int maximum = 0;
    for(int i = 0; i < resize; i++){
        getinfected(infected,i);
        getdistance(distance);
        int tt = 100;
        while(tt--){
            for(int j = 0; j < resize; j++){
                distance[j] += velocity[j];
            }
            unordered_set<int>ToKnow;
            vector<int> pCases = GetpresentCases(infected);
            for(auto x : pCases){
                ToKnow.insert(distance[x]);
            }
            for(int j=0; j<resize; j++){
                if(infected[j]){
                    continue;
                }
                if(ToKnow.count(distance[j])){
                    infected[j]=1;
                }
            }
            ToKnow.clear();
        }
        int count = getAnswer(infected);
        if(minimum > count){
             minimum = count;
                }if(maximum < count){
                    maximum = count;
        }
    }
    cout<<minimum<<" "<<maximum<<endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin>>size;
        vector<int> velocity(size);
        for(int i = 0; i < size; i++){
            cin >> velocity[i];
        }
        if(size == 3){
            int res = velocity.size();
            vector<int>answer(res,1);
            for(int i = 0;i < res; i++){
                for(int j = i + 1; j < res; j++){
                    if(velocity[i] > velocity[j])
                        answer[i] += 1;
                }
                for(int j = 0; j < i; j++){
                    if(velocity[j] > velocity[i])
                        answer[i] += 1;
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
            continue;
        }
        greaterThan3(velocity);
    }
    return 0;
}