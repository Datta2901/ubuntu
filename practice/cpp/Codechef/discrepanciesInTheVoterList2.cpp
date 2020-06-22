// https://www.codechef.com/problems/VOTERS
// #include<bits/stdc++.h>
// #include<unordered_map>
// #define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << endl;}
// #define loop(n) for(int i=0;i<n;i++)
// #define loop1(n) for(int i=1;i<=n;i++)
// #define pb push_back
// #define in insert
// #define inc_sort(v) sort(v.begin(),v.end());
// #define endl '\n'
// using namespace std;

//  vector<int> countFreq(vector<int> arr,int n){ 
//     unordered_map<int, int> mp; 
//     vector<int> answer;
// Traverse through array elements and 
//      count frequencies 
//     for (int i = 0; i < n; i++){
//         mp[arr[i]]++; 
//     } 

//     // Traverse through map and print frequencies 
//     for (auto x : mp){
//         if(x.second >= 2){
//              answer.pb(x.first); 
//         } 
//     } 

//     return answer;
// }

// int main(){
//     EXECUTE_FASTER
//     int num1,num2,num3,a;
//     cin >> num1 >> num2 >> num3;
//     vector<int> voterslist,finallist;
//     loop(num1){
//         cin >> a;
//         voterslist.pb(a);
//     }
//     loop(num2){
//         cin >> a;
//         voterslist.pb(a);
//     }
//     loop(num3){
//         cin >> a;
//         voterslist.pb(a);
//     }

    
//     finallist = countFreq(voterslist,voterslist.size());

//     sort(finallist.begin(),finallist.end());
//     cout << finallist.size() << endl;
//     printVect(finallist,int);

            // time complexity is O(n)+ n*log(n)
//     return 0;
// }

// solution is correct
