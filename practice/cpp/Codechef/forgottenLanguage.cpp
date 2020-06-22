#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define pb push_back
#define endl '\n'
using namespace std;

int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    int size,value,query;
    while(t--){
        cin >> size >> query;
        string str[size];
        loop(size){
            cin >> str[i];
        }

        vector<bool> check(size,false);

        int cases;
        loop(query){
            cin >> cases;
            loop(cases){
                string s;
                cin >> s;
                loop(size){
                    if(s.compare(str[i]) == 0){
                        check[i] = true;
                    }
                }
            }
        }

        loop(size){
            if(check[i]){
             cout << "YES ";
            }else{
                cout << "NO ";
            }
        }
        
        cout << endl;
    }
    return 0;
}