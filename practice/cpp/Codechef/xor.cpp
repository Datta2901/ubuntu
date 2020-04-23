#include<bits/stdc++.h>
#include<stdio.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    while(n--)
    {
        ll l,r,count=0;
        cin >> l;
        cin >> r;
        count= (r-l)/2;
        if(l%2==1 || r%2==1)
        {
        count++;
        }

        if(count%2==0)
        {
        cout<<"Even\n";
        }
        else
        {
        cout<<"Odd\n";
        }
    }

    return 0;
}
