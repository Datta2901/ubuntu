#include <bits/stdc++.h>

using namespace std;

map <char,bool> mp;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        mp.clear();
        string str;
        cin >> str;
        bool flag=0;
        for(char ch : str)
        {
            if(mp[ch])
            {
                flag=1;
                break;
            }
            mp[ch]=1;
        }
       
        cout << (flag?"Yes\n":"No\n" );
       
    }
}
