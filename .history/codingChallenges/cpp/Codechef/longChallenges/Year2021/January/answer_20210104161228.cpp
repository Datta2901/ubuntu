// #include<bits/stdc++.h>
// #include<vector>
// #include<iostream>
// #include<cmath>
// #include<algorithm>
// #include<iterator>
// #include<string>
// #include<map>
// #define vv vector
// #define F first
// #define S second
// #define MP make_pair
// #define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
// #define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
// #define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
// #define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
// #define MOD 1000000007
// #define ll long long int 
// #define l long int
// #define loop(n)for(int i = 0; i < n; i++)
// #define rep(e,var) for(int var = 0; var < e; var++)
// #define repeat(n,a) for(int i=a;i<n;i++)
// #define vec(datStruct) vector<datStruct>
// #define inc_sort(v) sort(v.begin(),v.end());
// #define pb push_back
// #define endl '\n'
// using namespace std;
// #define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
// #define testcase() int t; cin >> t; while(t--)

// typedef pair<int,int> ele;
// typedef vector< vector<int> > matrix;
// typedef pair<ele,ele> box;
// typedef map<box,int> boxSum ;

// pair<vector<int>,vector<int>> splitIntoTwoHalfs(vec(int) required,int target,map<int,int>freq){
//     int sum1 = 0,sum2 = 0;
//     vector<int> a,b;
//     for(int i = 0; i < required.size(); i++){
        
//     }
//     return {a,b};
// }

// int main(){
//         EXECUTE_FASTER
//         testcase(){
//             int size,target;
//             cin >> size >> target;
//             vec(int) numbers,required;
//             map<int,int> freq;
//             int sum = 0;
//             for(int i = 0; i < numbers.size(); i++){
//                 int a;
//                 cin >> a;
//                 freq[a]++;
//             }
//             inc_sort(numbers);
//             for(int i = numbers.size() - 1; i >= 0; i--){
//                 if(sum <= 2 * target){
//                     sum += numbers[i];
//                     required.push_back(numbers[i]);
//                 }
//             }
            
//         }
//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int countSubarrays(int arr[], int n, int k) { int start = 0, end = 0, count = 0, sum = arr[0];

while (start < n && end < n) { 

    if (sum <= k) { 
       end++; 

       if (end >= start) 
         count += end - start; 

       if (end < n) 
         sum += arr[end]; 
    } 

    else { 
       sum -= arr[start]; 
       start++; 
    } 
} 

return count; 
}

int main() {

int n,k;
cin>>n>>k;
int *array= new int[n];
for(int i=0;i<n;i++)
{
    cin>>array[i];
}
cout <<max(0,int(pow(2,n))-2*(countSubarrays(array, n, k)+1));
}
