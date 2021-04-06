#include<bits/stdc++.h>
using namespace std;
struct street
{
    int begin, end, time;
    string name;
};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","a",stdout);
 
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    street strt[c];
    for(int i=0; i < c; i++)
        cin >> strt[i].begin >> strt[i].end >> strt[i].name >> strt[i].time;
    cout << strt[2].begin << " " << strt[2].end << " " << strt[2].name; 
    return 0;
}