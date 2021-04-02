#include<iostream>
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
void solve()
{
   
    long n;
    cin>>n;
     switch (n%8) {
        case 0:
            cout<<n-1<<"SL\n";
            break;
        case 1:
            cout<<n+3<<"LB\n";
            break;
        case 2:
            cout<<n+3<<"MB\n";
            break;
        case 3:
            cout<<n+3<<"UB\n";
            break;
        case 4:
            cout<<n-3<<"LB\n";
            break;
        case 5:
            cout<<n-3<<"MB\n";
            break;
        case 6:
            cout<<n-3<<"UB\n";
            break;
        case 7:
            cout<<n+1<<"SU\n";
            break;
        }
   
}
int main() {
	fastio;
    freopen("input.txt","r",stdin);
    freopen("output1.txt","a",stdout);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}



