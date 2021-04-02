#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void getdistance(vector<ll> &distance)
{
    ll resize= distance.size();
    for( ll i=0; i<resize; i++)
    {
        distance[i]=i;
    }
}
void getinfected(vector<ll> &infected, ll n)
{
    vector<ll>temp(infected.size(),0);
    infected = temp;
    infected[n]=1;
}
 
vector<ll> getcurrentlyinfected(vector<ll> &infected)
{
    vector<ll>out;
    for(ll i=0; i<infected.size(); i++)
    {
        auto x = infected[i];
        if ( x==1)
        {
            out.push_back(i);
        }
    }
    return out;
}
int getOne(vector<ll> &velocity){
    ll count=0;
    for(auto x :velocity){
        if(x ==1){
            count++;
        }
    }
    return count;
}

void solve(vector<ll> &velocity){
    ll resize=velocity.size();
    if(resize==0){
        cout<<0<<" "<<0<<endl;
        return;
    }
    if(resize==1){
        cout<<1<<" "<<1<<endl;
        return;
    }
    vector<ll>infected(resize,0);
    vector<ll> distance(resize,0);
    ll min_=INT32_MAX;
    ll max_=0;
    for(ll i = 0; i < resize; i++){
        getinfected(infected,i);
        getdistance(distance);
        int tt = 100;
        while(tt--){
            for(ll j = 0; j < resize; j++){
                distance[j] += velocity[j];
            }
            unordered_set<ll>hashset;
            vector<ll> alreadyinfected = getcurrentlyinfected(infected);
            for(auto x : alreadyinfected)
            {
                hashset.insert(distance[x]);
            }
            for(ll j=0; j<resize; j++)
            {
                if(infected[j])
                {
                    continue;
                }
                if(hashset.count(distance[j])){
                    infected[j]=1;
                }
            }
            hashset.clear();
        }
        ll ans = getOne(infected);
        min_=min(min_,ans);
        max_=max(max_,ans);
    }
    cout<<min_<<" "<<max_<<endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin>>size;
        vector<ll> velocity(size);
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
        solve(velocity);
    }
    return 0;
}