#include<bits/stdc++.h>
#include<algorithm>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define loop(s,e) for(int i = s; i <= e; i++)
#define rep(e) for(int i = 0; i < e; i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)

int main(){
    EXECUTE_FASTER;
    int t;
    cin >> t;
    
    while(t--){
        int size;
        cin >> size;
        string str;
        cin >> str;
        vector<int> answer;
        rep(size){
            answer.pb(str[i]-48);
        }
        if(answer.size() == 1){
            cout << answer[0] << endl;
            continue;
        }
        bool flag = true;
        for(vector<int>::iterator it = answer.begin(); (it + 1) !=answer.end(); it++){
            // cout << *it << " " << *(it+1) << endl;
            if(*it == 1 &&  *(it + 1) == 0){
                // cout << "-------------\n";
                answer.erase(it);
                if(it != answer.end()-1 ){
                    it = answer.begin();
                    flag  = false;
                }
            }
        }

        for(vector<int>::iterator it = answer.begin(); it !=answer.end(); it++){
            cout << *it ;
        }
        cout << endl;
    }   
    return 0;
}