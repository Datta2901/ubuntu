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
    EXECUTE_FASTER
    testcase{
        int count  = 0;
            for(int i = 0; i < 5; i++){
                int a; cin >> a;
                if(a == 1){
                    count++;
                }
            }
            switch (count)
            {
            case 0 :
                cout << "Beginner" << endl;
                break;
            case 1 :
                cout << "Junior Developer" << endl;
                break;    
            case 2 :
                cout << "Middle Developer" << endl;
                break;
            case 3 :
                cout << "Senior Developer" << endl;
                break;
            case 4 :
                cout << "Hacker" << endl;
                break;
            case 5 :
                cout << "Jeff Dean" << endl;
                break;            
            }
           
    }
    return 0;
}