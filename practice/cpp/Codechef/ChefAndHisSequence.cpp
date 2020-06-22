// #include<bits/stdc++.h>
// #define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define loop(n) for(int i=0;i<n;i++)
// #define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
// #define loop1(n) for(int i=1;i<n;i++)
// #define inc_sort(v) sort(v.begin(),v.end());
// #define pb push_back
// #define endl '\n'
// using namespace std;
// #define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
// #define testcase int t; cin >> t; while(t--)
// int main(){
//     EXECUTE_FASTER
//     testcase{
//         int n,size;
//         cin >> n;
//         vector<int> sequence,sub;
//         vector<int> :: iterator it;
//         vectInput(sequence,n);
//         cin >> size;
//         vectInput(sub,size);
//         bool flag = true;
//         loop(size){
//              it = find(sequence.begin(),sequence.end(),sub[i]);
//             if((it - sequence.begin()) == sequence.size()){
//                 cout << "No\n";
//                 flag = false;
//                 continue;
//             }
//         }
       
//        if(flag){
//            cout << "Yes\n";
//        }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int q=0;
    
    for(int i=0;i<n;i++){
        if(a[i]==b[q]){
            q++;
        }
        if(q==m)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    
    cout<<"No"<<endl;
    return;
}

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    int t;
	cin >> t;
	while(t--){
	    solve();
	}
}