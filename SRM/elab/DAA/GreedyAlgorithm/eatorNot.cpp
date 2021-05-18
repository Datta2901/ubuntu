#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nv,nc,nf,np,n,i,j,nvc,ncc,nfc,npc;
    int t1,t2,t3,t4;
 
    cin>>nv>>nc>>nf>>np;
    cin>>n;
 
    vector<int>arr[n];
 
    for(i=0;i<n;++i)
    {
        cin>>t1>>t2>>t3>>t4;
        arr[i].push_back(t1);
        arr[i].push_back(t2);
        arr[i].push_back(t3);
        arr[i].push_back(t4);
         
    }
    int ans=0;
    for(i=1;i<(1<<n);++i)
    {
        nvc=0;ncc=0;nfc=0;npc=0;
        for(j=0;j<n;++j)
        {
            if(i & (1<<j))
            {
                nvc+=arr[j][0];ncc+=arr[j][1];nfc+=arr[j][2];npc+=arr[j][3];
                
            }
            
        }
        if(nvc==nv && ncc==nc && nfc==nf && npc==np)
        {
            ans=1;
            break;
 
        }
 
    }
 
    if(ans==1)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return 0;
}