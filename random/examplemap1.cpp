#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
#include <utility>
#include <iterator>

using namespace std;
int main()
 {
    EXECUTE_FASTER;
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int key1, key2, value;
    map<pair<int,int>,int> test;
    loop(5){
        cin >> key1 >> key2 >> value;
    }

    for (auto it = test.begin(); it!= test.end();it++){
        cout << it->first.first  << endl;
        cout << it->first.second << endl;
        cout << it->second  << endl;
    }


}