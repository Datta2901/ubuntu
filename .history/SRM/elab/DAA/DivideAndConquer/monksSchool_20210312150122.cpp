#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){    
    ll n,m;
    cin>>n>>m;
    string s[n];
    map<string ,ll> pam;
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
        pam[s[i]]=i;
    }
    vector<pair<ll,string> > p[n];
    string S;
    for(ll i=0;i<m;i++)
    {
        pair<ll,string> v;
        cin>>S>>v.second>>v.first;
        ll idx=pam[S];
        p[idx].push_back(v);
    }
    for(auto q=pam.begin();q!=pam.end();++q)
    {
        ll i=(*q).second;
        S=(*q).first;
        sort(p[i].begin(),p[i].end());
        
        cout<<S<<"\n";
        for(ll j=0;j<p[i].size();j++)
        {
            cout<<p[i][j].second<<" "<<p[i][j].first<<"\n";
        }
    }
    
}