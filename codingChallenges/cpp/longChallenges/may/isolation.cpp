#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<iterator>
#include<string>
#include<map>
#define loop(n) for(int i=0;i<n;i++)
#define testcase() int t;cin >> t; while(t--)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
    testcase(){

        int size,query,q,max =0;
        cin >> size >> query;
        int a;
        string name;
        cin >> name;
        set<char> data;
        multiset<char> centre;
    
        for(int i = 0; i < name.size(); i++){
            data.insert(name[i]);
            centre.insert(name[i]);
        }

        vector<long long int> repeat;

       for( set<char> ::iterator it = data.begin(); it != data.end(); it++){

          a = centre.count(*it);
           if(a >= 1){
                repeat.push_back(a);
           }
        }
        loop(query){
            cin >> q;
            long long int sum = 0;
            loop(repeat.size()){
                    if(repeat[i] - q > 0){
                    sum = sum + (repeat[i] - q);
                    }
                }
            cout << sum  << endl;
        }

        cout << endl;
        repeat.clear();
        data.clear();
        centre.clear();

    }
return 0;
}