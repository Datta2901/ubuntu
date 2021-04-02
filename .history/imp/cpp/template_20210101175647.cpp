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
int main(){
      EXECUTE_FASTER
      testcase(){

      }
   return 0;
}

 //to write a macro in multiple lines use line continuation operator \ 

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
/*
   #ifndef ONLINE_JUDGE

         if(fopen("input.txt","r"))
         {
             freopen("input.txt","r",stdin);
             freopen("output.txt","w",stdout);
         }
    #endif // ONLINE_JUDGE

  /* TO know time taken by the program{

            clock_t time_p=clock();
            void timeTaken()
            {
               time_p=clock()-time_p;
               cerr << "Time Taken : " <<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
            }
            
   }*/         

