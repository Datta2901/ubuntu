#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string a;
vector<string>s;
for(int i=0;i<n;i++){
cin>>a;
s.push_back(a);
}
map<string,int>m;
sort(s.begin(),s.end());
for(auto x:s)
m[x]++;
for(auto *y:m){
if((y->second/n)*100>=5)
cout<<y.first<<endl;}
    return 0;
}