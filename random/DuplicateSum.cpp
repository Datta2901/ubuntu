#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    int arr[n];
    int brr[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
        mp[brr[i]]++;
    }
    int c = 0;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 1)
        {
            res.push_back(arr[i]);
            c++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[brr[i]] == 1)
        {
            res.push_back(brr[i]);
            c++;
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        if (i != res.size() - 1)
            cout << ",";
    }
    cout << endl;
    cout << c;
    return 0;
}