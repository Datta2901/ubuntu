//https://codeforces.com/problemset/problem/1346/A
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
    long long int n,k,denominator,n1,n2,n3,n4;
    while(t--){
        cin >> n >> k;
        denominator =(k * k + 1)*(k + 1);
        n1 = n /denominator;
        n2 = k * n1;
        n3 = k * n2;
        n4 = k * n3;
        cout << n1 << " " << n2 << " " << n3 << " "<< n4 <<endl; 
    }
    return 0;
}