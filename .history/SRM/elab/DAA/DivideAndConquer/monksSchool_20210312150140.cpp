#include<bits/stdc++.h>
using namespace std;
int main(){    
    long lo n,m;
    cin>>n>>m;
    string s[n];
    map<string ,long lo> pam;
    for(long lo i=0;i<n;i++)
    {
        cin>>s[i];
        pam[s[i]]=i;
    }
    vector<pair<long lo,string> > p[n];
    string S;
    for(long lo i=0;i<m;i++)
    {
        pair<long lo,string> v;
        cin>>S>>v.second>>v.first;
        long lo idx=pam[S];
        p[idx].push_back(v);
    }
    for(auto q=pam.begin();q!=pam.end();++q)
    {
        long lo i=(*q).second;
        S=(*q).first;
        sort(p[i].begin(),p[i].end());
        
        cout<<S<<"\n";
        for(long lo j=0;j<p[i].size();j++)
        {
            cout<<p[i][j].second<<" "<<p[i][j].first<<"\n";
        }
    }
    
}