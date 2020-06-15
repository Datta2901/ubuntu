#include<bits/stdc++.h>
#include<algorithm>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(s,e) for(int i = s; i <= e; i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase int t; cin >> t; while(t--)

bool isPairpresent(pair<int,int> a,vector<pair<int,int> > & matrice){
//     auto p = a;
//   if(std::find(matrice.begin(), matrice.end(), p) != matrice.end()){
//       return false;
//   }
    int count = 0;
    for(int i = 0; i < matrice.size(); i++){
        if(matrice[i] == a){
            count ++;
        }
    }
    if(count == 1){
        return true;
    }

  return false;
}

void printMatrice(vector<vector<int> > & pattern,int order){
    cout << 2 << endl;
            for(int i = 0; i < order; i++){
                for(int j = 0; j < order; j++){
                    cout << pattern[i][j] << " " ;
                }
                cout << endl;
            }
}

int main(){
    int t,order,p,x,a;
    cin >> t;
    while(t--){
        cin >> order >> p;
        int count = 0;
        pair<int,int> Rowcol;
        vector<pair<int,int> >  matrice;
        vector< vector<int> > pattern(order,vector<int> (order,0));
        cout << 1 << " "<< 1 << " " << 1 << " "<< order << " " << order << endl;
        cin >> x;
        srand(time(0));
        while(x != count){ 
            bool flag = false; 
            int i = (rand() % order) + 1, j = (rand() % order) + 1;
            Rowcol = {i,j};
            matrice.pb(pair<int,int> (i,j));
            flag = isPairpresent(Rowcol,matrice);
            if(flag){
                cout << 1 << " " << i << " " << j << " " << i << " " << j << endl;
                cin >> a;
                if(a == 1){
                    count++;
                }
                pattern[i-1][j-1] = a;
            }  
        } 
           printMatrice(pattern,order);
            cin >> x;
    }




    return 0;
}