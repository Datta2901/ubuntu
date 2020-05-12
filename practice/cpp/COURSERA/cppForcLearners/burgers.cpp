#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
    bool flag =true;
    int x,y,z,a,b;
    cin >> x >> y >> z >> a >> b;
    if( y > x && y > z && fllag == true){
        cout << 2 * b * z + (a/2) *x  << endl;
        flag == false;  
    }
    if( x > y && x > z && flag == true){
        cout << (b/2) * y + 2 * a * z <<endl;
        flag == false;
    }
    else{
        if(flag == true)
        cout << a * x + b *y << endl;
        flag == false;
    }

    return 0 ;
}