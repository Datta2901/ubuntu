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
    int RequiredPages,AvailablePages,money,NumberOfNotes;
    while(t--){
        // vector<tuple<int,int>> Notes;
        bool skip = false;
        cin >> RequiredPages >> AvailablePages >> money >> NumberOfNotes;
        int buyPages = RequiredPages - AvailablePages;
        loop(NumberOfNotes){
            int a,b;
            cin >> a >> b;
            if(a >= buyPages && money >= b){
                skip = true;
            }
            // Notes.pb(tuple<int,int> (a,b));
        }

        if(skip){
            cout << "LuckyChef\n";
        }else{
            cout << "UnluckyChef\n";
        }      
    }
    return 0;
}
