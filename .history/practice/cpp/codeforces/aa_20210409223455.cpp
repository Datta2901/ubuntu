#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int main()
{
    int n, q, a[N], cnt;
    scanf("%d%d",&n,&q);
	for(int i = 1; i <= n; ++i){
    	scanf("%d",a+i);
		cnt += a[i];
	}
	while(q--){
		int opt, x;
		scanf("%d%d",&opt,&x);
		if(opt == 1){
			if(a[x]) cnt--;
			else cnt++;
			a[x] = 1 - a[x];
		}
		else{
			if(cnt >= x) cout << 1 << endl;
			else cout << 0 <<;
		}
	}
	return 0;
}