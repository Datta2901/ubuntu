// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int size;
//         cin >> size;
//         vector<int>num;
//         for(int i =0; i < size; i++){
//             int a;
//             cin >> a;
//             num.push_back(a);
//         }

//         int i = 0,pos = 0;
//         while(i < num.size()){
//             if(num[i] % 2 == 0){
//                 if(i != pos){
//                     swap(num[i],num[pos]);    
//                 }
//                 pos++;
//             }
//             i++;
//         }

//         int start = 0,end = size - 1;

//         while(start < end){
//             cout << num[start] << " " << num[end] << " ";
//             start++;
//             end--;
//         }
        
//         if(size % 2 == 1){
//             cout << num[start]<< endl;
//         }else{
//             cout << endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]%2==0)
      a[i]*=-1;
  }   

  sort(a,a+n);

  for(int i=0;i<n;i++)
    cout<<abs(a[i])<<" ";
  cout<<"\n";
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;

  while(t--)
    solve();

return 0;
}