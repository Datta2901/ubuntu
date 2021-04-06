#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void resetdistance(vector<ll> &dist)
{
    ll l= dist.size();
    for( ll i=0; i<l; i++)
    {
        dist[i]=i;
    }
}
void resetinfected(vector<ll> &infected, ll n)
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
int getcountofone(vector<ll> &velocity)
{
    ll count=0;
    for(auto x :velocity)
    {
        if(x==1)
        {
            count++;
        }
    }
    return count;
}
void solve2(vector<ll> &velocity)
{
    ll n = velocity.size();
    vector<ll>count(n,1);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(velocity[i] > velocity[j])
                count[i]+=1;
        }
        for(int j=0; j<i; j++)
        {
            if(velocity[j] > velocity[i])
                count[i]+=1;
        }
    }
    printf("%d %d\n",*min_element(count.begin(),count.end()),*max_element(count.begin(),count.end()));
}
void solve(vector<ll> &velocity)
{
    ll l=velocity.size();
    if(l==0)
    {
        cout<<0<<" "<<0<<endl;
        return;
    }
    if(l==1)
    {
        cout<<1<<" "<<1<<endl;
        return;
    }
    vector<ll>infected(l,0);
    vector<ll> dist(l,0);
    ll min_=INT32_MAX;
    ll max_=0;
    for(ll i=0; i<l; i++)
    {
        resetinfected(infected,i);
        resetdistance(dist);
        int loop=100;
        while(loop--)
        {
            for(ll j=0; j<l; j++)
            {
                dist[j] += velocity[j];
            }
            unordered_set<ll>hashset;
            vector<ll> alreadyinfected = getcurrentlyinfected(infected);
            for(auto x : alreadyinfected)
            {
                hashset.insert(dist[x]);
            }
            for(ll j=0; j<l; j++)
            {
                if(infected[j])
                {
                    continue;
                }
                if(hashset.count(dist[j])){
                    infected[j]=1;
                }
            }
            hashset.clear();
        }
        ll ans = getcountofone(infected);
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