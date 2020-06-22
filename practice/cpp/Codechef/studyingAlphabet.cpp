//both are accepted 
//easy
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
int main(){
    EXECUTE_FASTER
        string s;
        cin >> s;
        int queries;
        cin >> queries;
        loop(queries){
            string a;
            cin >> a;
            string :: iterator ip;
            bool flag = true;
                loop(a.size()){
                    ip = find(s.begin(),s.end(),a[i]);
                    if(ip - s.begin() == s.size()){
                        flag = false;
                        cout << "No\n";
                        break;
                    }
            }
            if(flag){
                cout << "Yes\n";
            }

        }
    return 0;
}
/*
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
int main(){
    EXECUTE_FASTER
        string s;
        cin >> s;
        int queries;
        cin >> queries;
        loop(queries){
            string a;
            cin >> a;
            string :: iterator ip;
            set<char> chars;
            loop(a.size()){
                chars.insert(a[i]);
            }

            bool flag = true;
            for(set<char> :: iterator it = chars.begin();it != chars.end(); it++){
                ip = find(s.begin(),s.end(),*it);
                if(ip - s.begin() == s.size()){
                    flag = false;
                    cout << "No\n";
                    break;
                }
            }
            if(flag){
                cout << "Yes\n";
            }

        }
    return 0;
}*/