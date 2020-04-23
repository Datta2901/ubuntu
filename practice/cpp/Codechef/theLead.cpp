#include <bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;

int main() { 
    EXECUTE_FASTER;
    int t;
    cin>>t;
    int a,b,m=0,winner=0,s1=0,s2=0;
    while(t--)
    {
        cin>>a>>b;
        s1+=a;
        s2+=b;
        if(s1-s2>m)
        {
            winner=1;
            m=s1-s2;
        }
        else if(s2-s1>m)
        { 
            winner=2;
           m=s2-s1;
        }

    }
    cout<<winner<<" "<<m;
	return 0;
}
