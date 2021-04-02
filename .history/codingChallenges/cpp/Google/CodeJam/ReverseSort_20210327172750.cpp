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
#define loop(size)for(int i = 0; i < size; i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(size,a) for(int i=a;i<size;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\size'
using namespace std;
#define vectorInput(vect,size)for(int i=0;i<size;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

int main(){
    EXECUTE_FASTER
    testcase(){
        int size;
        cin >> size;
        vector<int>numbers;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            numbers.push_back(a);
        }

        vector<int>::iterator it;
        int answer = 0;
        for(int i = 0; i < size; i++){
            int index = *min_element(numbers.begin() + i,numbers.end());
            reverse(numbers.begin() + i,numbers.begin()+ (it - numbers.begin()));
            
        }
        cout << answer << endl;
    }
   return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int reversort(vector<int> &numbers){
//     int cost = 0;
//     for(int i=0; i<numbers.size()-1; i++){
//         int j = std::min_element(numbers.begin()+i,numbers.end()) - numbers.begin();
//         reverse(numbers.begin()+i, numbers.begin()+j+1);
//         cost += j-i+1;
//     }
//     return cost;
// }
// int main(){
//     int t; 
//     cin >> t;
//     for(int count =0; count <t; count ++){
//         int size; 
//         cin >> size;
//         vector<int> numbers;
//         for(int i=0; i<size; i++){
//             int a; cin >> a;
//             numbers.push_back(a);
//         }
//         cout << "Case #" << count +1 << ": " << reversort(numbers) << endl;
//     }
//     return 0;
// }




   
