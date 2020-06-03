#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i=0;i<n;i++)
#define rep(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define testcase() int t; cin >> t; while(t--)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
    testcase(){

    }
    return 0;
 }
//  to debug something directly it gives you the value of the variables{
   #define TRACE
   #ifdef TRACE
   #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
   template <typename Arg1>
   void __f(const char* name, Arg1&& arg1){
   cerr << name << " : " << arg1 << std::endl;
   }
   template <typename Arg1, typename... Args>
   void __f(const char* names, Arg1&& arg1, Args&&... args){
   const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
   }
   #else
   #define trace(...)
   #endif
// }
     /*to generate random testcase{

            for different values each time we run the code 
            srand(time(NULL));
            function to generate random numbers in range [0-999]
            (rand() % 1000);
   }*/

   /*for files as input/output{

            ifstream cin("input.txt");
            ofstream cout("output.txt");
                        |
            freopen("input.txt","r",stdin);
               freopen("output.txt","a",stdout);
  }*/

  /* TO know time taken by the program{

            clock_t time_p=clock();
            void timeTaken()
            {
               time_p=clock()-time_p;
               cerr << "Time Taken : " <<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
            }
            
   }*/         

