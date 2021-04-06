#include<bits/stdc++.h>
using namespace std;
int main(){    
     n,m;
    cin>>n>>m;
    string s[n];
    map<string ,> pam;
    for( i=0;i<n;i++)
    {
        cin>>s[i];
        pam[s[i]]=i;
    }
    vector<pair<,string> > p[n];
    string S;
    for( i=0;i<m;i++)
    {
        pair<,string> v;
        cin>>S>>v.second>>v.first;
         idx=pam[S];
        p[idx].push_back(v);
    }
    for(auto q=pam.begin();q!=pam.end();++q)
    {
         i=(*q).second;
        S=(*q).first;
        sort(p[i].begin(),p[i].end());
        
        cout<<S<<"\n";
        for( j=0;j<p[i].size();j++)
        {
            cout<<p[i][j].second<<" "<<p[i][j].first<<"\n";
        }
    }
    
}