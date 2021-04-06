#include<bits/stdc++.h>
using namespace std;
int main(){    
    long  n,m;
    cin>>n>>m;
    string s[n];
    map<string ,long > pam;
    for(long  i=0;i<n;i++)
    {
        cin>>s[i];
        pam[s[i]]=i;
    }
    vector<pair<long ,string> > p[n];
    string S;
    for(long  i=0;i<m;i++)
    {
        pair<long ,string> v;
        cin>>S>>v.second>>v.first;
        long  idx=pam[S];
        p[idx].push_back(v);
    }
    for(auto q=pam.begin();q!=pam.end();++q)
    {
        long  i=(*q).second;
        S=(*q).first;
        sort(p[i].begin(),p[i].end());
        
        cout<<S<<"\n";
        for(long  j=0;j<p[i].size();j++)
        {
            cout<<p[i][j].second<<" "<<p[i][j].first<<"\n";
        }
    }
    
}