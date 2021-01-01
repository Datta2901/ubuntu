// https://www.codechef.com/LRNDSA01/submit/LADDU
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
        int n,rank,laddus = 0;
        cin >> n;
        string country,s;
        cin >> country;
        loop(n){
            cin >> s;
                if(s == "CONTEST_WON" ){
                    cin >> rank;
                    if(rank < 20){
                        laddus += 300 + (20 - rank);
                    }else{
                        laddus += 300;
                    }  
                }else if(s == "TOP_CONTRIBUTOR"){
                    laddus += 300;
                }else if(s == "BUG_FOUND"){
                    int severity;
                    cin >> severity;
                    laddus += severity;
                }else if(s == "CONTEST_HOSTED"){
                    laddus += 50;
                }     
            }
            if(country == "INDIAN"){
                cout << (laddus/ 200) << endl;
            }else{
                cout << (laddus/ 400) << endl;
            }
            // time coplexity is O(n)
    }
    return 0;
}