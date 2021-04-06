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

// int solve(){
//     int size,x,y;
//     cin >> size >> x >> y;
//     vector<int> numbers,PrefixSum(size,0);
//     for(int i = 0; i < size; i++){
//         int a;
//         cin >> a;
//         numbers.push_back(a);
//     }
//     int sum = 0;
//     for(int i = 0; i < size; i++){
//         sum += numbers[i];
//         PrefixSum[i] = sum;
//     }

//     printVector(PrefixSum,int);
//     cout << endl;

//     for(int i = 0; i < size; i++){
//         if(x <= PrefixSum[i] && PrefixSum[i] <= y){
//             return 0;
//         }
//     }

//     for(int i = 0; i < size; i++){
//         if(x <= numbers[i] && numbers[i] <= y){
//             return 1;
//         }
//     }

//     for(int i = 0; i < size; i++){
//         for(int j = i + 2; j < size; j++){
//             if(i != 0){
//                 int result = (PrefixSum[i] - PrefixSum[i - 1]) + numbers[j];
//                 if(x <= result && result <= y){
//                     return 1;
//                 }
//             }if(i == 0){
//                 int result = PrefixSum[i] + numbers[j];
//                 if(x <= result && result <= y){
//                    return 1; 
//                 } 
//             }
//         }
//     }
//     return 2;
// }

// int main(){
//     EXECUTE_FASTER
//     testcase(){
//         cout << solve() << endl;
//     }
//    return 0;
// }

#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define vv vector
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
#define MOD 1000000007
#define ll long long int 
#define l long int
#define loop(n)for(int i = 0; i < n; i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;

int solve(){
    int size,x,y;
    cin >> size >> x >> y;
    vector<int>numbers;
    map<int,int>freq;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
        freq[a]++;
    }
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += numbers[i];
        if(x <= sum && sum <= y){
            return 0;
        }
    }

    int count = 0;
    for(map<int,int>:: iterator it = freq.begin(); it != freq.end(); it++){
        count++;
        frey-it->first
        if(count == 2){
            break;
        }
    }

    return 2;
}

int main(){
      EXECUTE_FASTER
      testcase(){
          cout << solve() << endl;
      }
   return 0;
}