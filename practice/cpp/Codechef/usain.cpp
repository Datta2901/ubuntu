#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t,n,a;
    cin>>t;
    int finish_dis,tiger_distfbolt,tiacce,bospeed;
    float boltime,tigertime;
    while(t--){
        
        cin >> finish_dis >> tiger_distfbolt >> tiacce >> bospeed ;

        boltime = (float)finish_dis / bospeed;

        tigertime =  sqrt((float)2 *(finish_dis + tiger_distfbolt )/ tiacce );

        if(tigertime <= boltime){
            cout << "Tiger" << endl;
        }else if(boltime < tigertime){
            cout << "Bolt" << endl;
        }
    }
return 0;
}      