#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)

int main(){

    int number,a = 1,b;
    cin >> number;
    int mid = (1 + number)/2;
    char c = 'G';
    while(c != 'E'){
        loop(2){ 
            bool flag = false,skip = false;
            cout << 1 << endl;
            cin >> c;
            if(c == 'E'){
                break;
            }else if(c == 'L'){
                 flag = true;
            }
           cout << mid << endl;
           cin >> c;
           if(flag){
               break;
           }
        }

       if(c =='L'){
            mid = (a + mid)/2;
       }else if(c == 'G'){
           mid = (mid + number)/2;   
       }else if (c == 'E'){
           break;
       }  
    }

    
    return 0;
}