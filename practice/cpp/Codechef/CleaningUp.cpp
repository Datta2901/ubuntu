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
        int n;
        cin >> n;
        vector<int> work,uncompleted,chef,assistant;
        loop1(n){
            work.pb(i);
        }
        int k;
        cin >> k;
        loop(k){
            int a;
            cin >> a;
            work[a - 1] = 0;
        }

        loop(work.size()){
            if(work[i] != 0){
                uncompleted.push_back(work[i]);
            }
        }

        loop(uncompleted.size()){
            if(i % 2 == 0){
                chef.pb(uncompleted[i]);
            }else{
                assistant.pb(uncompleted[i]);
            }
        }
        
        printVect(chef,int);
        cout << endl ;
        printVect(assistant,int);
        cout << endl;
    }
    return 0;
} 