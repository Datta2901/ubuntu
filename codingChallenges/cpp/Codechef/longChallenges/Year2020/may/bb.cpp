#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,data) for(vector<data> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define vec(datStruct) vector<datStruct>
#define ll long long int
using namespace std;
clock_t time_p=clock();
void timeTaken()
{
	time_p=clock()-time_p;
	cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}

int main(){
    int t;
    cin >> t;
    ll a,b,l,r,c,d;
    while(t--){
        cin >> a >> b >> l >> r ;
        c = a | b;
        if( c >= l && c <= r){
            d = (a & c)*(b & c);
                if(d == 0){
                    cout << l << endl;
                    
                }
            cout << c << endl;
        timeTaken();
        }
    }
    return 0;
}