#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define iterator(Type) for(vector<int> :: iterator it = Type.begin(); it !=Type.end();it++) 
#define loop1(n) for(int i=1;i<n;i++)
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)
int main(){
    EXECUTE_FASTER
    testcase{
        bool flag = true;
        int size,count5 = 0,count10 = 0;
        cin >> size;
        vector<int> prices;
        vectInput(prices,size);
        if(prices[0] == 15 || prices[0] == 10){
            cout << "NO\n";
            continue;
        }
        loop(size){
            if(prices[i] == 5){
                count5++;
            }else if(prices[i] == 10){
                if(count5 - 1 >= 0){
                    count5--;
                    count10++;
                }else if(count5 - 1 < 0){
                    flag = false;
                    cout << "NO\n";
                    break;
                }
            }else if(prices[i] == 15){ 
                if(count10 -1 >= 0){
                    count10--;
                }else if(count5 - 2 >= 0 && count10 == 0){
                    count5 = count5 - 2;
                }else{ 
                    flag = false;
                    cout <<"NO\n";
                    break;
                }
            }
        }
        if(flag){
            cout << "YES\n";
        }
        
    }
    return 0;
}
