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
    while(t--){
        int count0 = 0, count1 = 0;
        string s;
        cin >> s;
        loop(s.size()){
            if((s[i] - 48) == 0)//due to ascii value or if(s[i] == '0')
            {
                count0++;
            }else{
                count1++;
            }

        }
        if(count0 == 1 || count1 == 1){
            cout <<"Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}