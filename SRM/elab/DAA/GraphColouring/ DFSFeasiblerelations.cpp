#include<bits/stdc++.h>
using namespace std;
int tests;
string st[1<<20];
int a[1<<20];
int n,m,w[1<<20];
int b[1<<20];
int er;
int get(int x)
{
	if (x==w[x])
		return x;
	return w[x]=get(w[x]);
}
void merge(int a,int b)
{
	a=get(a);
	b=get(b);
	w[a]=b;
}
int main(){
ios_base::sync_with_stdio(0);
cin>>tests;
for (;tests;--tests)
{
	cin>>n>>m;
	
	for (int i=1;i<=n;i++)
		w[i]=i;
	for (int i=1;i<=m;i++)
	{
		cin>>a[i]>>st[i]>>b[i];
		if (st[i]=="=")
			merge(a[i],b[i]);
	}
	er=0;
	for (int i=1;i<=m;i++)
	{
		if (st[i]=="=")
			continue;
		if (get(a[i])==get(b[i]))
			er=1;
	}
	if (er)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}
return 0;
}

