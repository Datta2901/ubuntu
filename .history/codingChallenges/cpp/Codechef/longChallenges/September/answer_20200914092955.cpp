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
int getcountofone(vector<ll> &arr)
{
    ll count = 0;
    for(auto x :arr)
    {
        if(x == 1)
        {
            count++;
        }
    }
    return count;
}

void solve(vector<ll> &arr)
{
    ll l=arr.size();
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
                dist[j] += arr[j];
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
                if(hashset.count(dist[j]))
                {
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
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        solve(arr);
    }
    return 0;
}