#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<=n;i++)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){

       int playedGames;
       cin >> playedGames;
       loop(playedGames){
           int coinpos,rounds,player;
           cin >> coinpos >> rounds >> player;
           if(rounds % 2 == 0){
               cout << rounds/2 << endl;
           }else{
               if(coinpos == player ){
                   cout << (rounds/2) << endl;
               }else{
                   cout << rounds/2 + 1 << endl; 
               }
           }
       }
    }
    return 0;
}