// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// typedef int i;
// #define v vector<int>
// #define pb push_back
// #define c cin >> 
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL); 
//     i t,k,j,d;
//     cin >> t;
//     while(t--){
//         v a,m;
//         for(i j = 0; j < 3; j++ ){
//             cin >> d;
//             a.pb(d);
//         }

//         for(i j=0; j < 3; j++){
//             cin >> d;
//             m.pb(d);
//         }

        
       

            
//     }
//     return 0;
// }
#include<bits/stdc++.h>

#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

using namespace std;

int returnDecision(int a, int b, int c, int d)
{
	int flag = 0;
	if (a > b && c > d)
		flag = 1;
	if (a == b && c == d)
		flag = 1;
	if (a < b && c < d)
		flag = 1;
	return flag;
}

int main()
{
	EXECUTE_FASTER;
	int t;
	cin>>t;
	while (t--)
	{
		int a1, a2, a3, c1, c2, c3;
		cin>>a1>>a2>>a3>>c1>>c2>>c3;
		int a = returnDecision(a1, a2, c1, c2);
		int b = returnDecision(a2, a3, c2, c3);
		int c = returnDecision(a1, a3, c1, c3);
		if (a && b && c)
			cout<<"FAIR"<<endl;
		else
			cout<<"NOT FAIR"<<endl;
	}
	return 0;
}