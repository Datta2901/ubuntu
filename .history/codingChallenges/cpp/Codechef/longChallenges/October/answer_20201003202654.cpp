#include <bits/stdc++.h>
#define ll long long
#define ui unsigned
#define lim (int)1e2+1
using namespace std;

void solve()
{
    ll n; cin>>n;
    ll temp =n;
    while(temp>1)
    {
        if(temp%2) break;
        temp/=2;
    }
    if(temp == 1 && n >1) {cout<<"-1\n"; return;}
    if(n==1) cout<<"1";
    else if(n==3) cout<<"1 3 2";
    else if(n==5) cout<<"2 3 1 5 4";
    else
    {
        cout<<"2 3 1 ";
        for(ll i=4;i<=n;i++)
        {
            if(i &(i-1)) cout<<i<<" ";
            else {i = i+1; cout<<i<<" "<<i-1<<" ";}
        }
    }
    cout<<"\n";
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE

         if(fopen("input.txt","r"))
         {
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
         }
    #endif // ONLINE_JUDGE


    ll t; cin>>t;

    while(t--)
    {
       solve();
    }

    return 0;
}