#include<iostream>
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin>>t ;
    while(t--)
    {

        int n ;
        cin>>n ;
        if (n == 1) {
            cout << 1 << endl;



            cout<< 1 << " " << 1 <<endl;
            continue;
        }
        cout<<n/2<<endl ;
        
        if ( n%2 != 0) {
            cout <<3<< " "<<1<< " "<<2<< " "<<n<<endl;
        } else {
            cout <<2<< " "<<1<< " "<<2<<endl;
        }
        for (int i = 4; i <= n; i+=2){
            cout <<2<< " " <<i-1<< " "<<i <<endl;
        }
        }

return 0 ;
}           