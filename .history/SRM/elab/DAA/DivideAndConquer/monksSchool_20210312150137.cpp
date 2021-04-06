#include<bits/stdc++.h>
using namespace std;
int main(){    
    oo n,m;
    cin>>n>>m;
    string s[n];
    map<string ,oo> pam;
    for(oo i=0;i<n;i++)
    {
        cin>>s[i];
        pam[s[i]]=i;
    }
    vector<pair<oo,string> > p[n];
    string S;
    for(oo i=0;i<m;i++)
    {
        pair<oo,string> v;
        cin>>S>>v.second>>v.first;
        oo idx=pam[S];
        p[idx].push_back(v);
    }
    for(auto q=pam.begin();q!=pam.end();++q)
    {
        oo i=(*q).second;
        S=(*q).first;
        sort(p[i].begin(),p[i].end());
        
        cout<<S<<"\n";
        for(oo j=0;j<p[i].size();j++)
        {
            cout<<p[i][j].second<<" "<<p[i][j].first<<"\n";
        }
    }
    
}