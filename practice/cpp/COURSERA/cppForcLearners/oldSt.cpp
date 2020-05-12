#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
#include<vector>
using namespace std;

// void inc(int &i){
//     static int n = 1;
//      i = n++;
// }
// void print(int i){
//     cout << i << endl;
// }
// old style of for_each


int main()
 {
    EXECUTE_FASTER
    int a,n;
    cin >> n;

    vector<int> data(n);
    
    // // for(int i = 0; i < n; i++){
    // //     cin >> a;
    // //    data.push_back(a);
    // // }
    // for_each(data.begin(),data.end(),inc);
    // for_each(data.begin(),data.end(),print);
    for_each(data.begin(),data.end(),[](int i){cout << i << endl;});// new way without use of above function 
                                                                   //  lamda functions are unnamed syntax as in above
    

    return 0;
 }