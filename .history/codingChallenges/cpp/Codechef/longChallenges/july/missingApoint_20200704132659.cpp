#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

pair<int,int> pairinsert(){
    long int x,y;
    cin >> x >> y;
    return {x,y};
}

void printPair(pair<long int,long int> print){
    cout  << print.first << " " << print.second << endl;
}

int main(){
     EXECUTE_FASTER
    testcase(){
        int size;
        cin >> size;
        long int xcoordinate,ycoordinate;
        unordered_set<long int> firstAxis,secondAxis;
        loop(4 * size - 1){
            cin >> xcoordinate >> ycoordinate;
            xcoordinate = (firstAxis.count(xcoordinate) > 0)  ?xcoordinate; firstAxis.erase(xcoordinate) : xcoordinate;firstAxis.insert(xcoordinate);
            ycoordinate = (secondAxis.count(ycoordinate) > 0) ? secondAxis.erase(ycoordinate): ycoordinate; secondAxis.insert(ycoordinate);

            cout << (*firstAxis.begin()) << " " << (*secondAxis.begin()) << endl;
        }

    }
    return 0;
}