#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<=n;i++)
#define pb push_back
#define endl '\n'
typedef lond long int ll;
using namespace std;
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        long long int k;
        long long int a,b;
        cin >> k >> a >> b;
        lastDigit = (a + b) %10 ,sum = a + b + lastDigit;
        ll 
    //     for(int i = 2; i < k; i++){
    //         sum  += ((sum) % 10);
    //     }
    //     cout << sum << endl;
    //     if(sum % 3 == 0){
    //         cout << "YES\n";
    //     }else{
    //         cout << "NO\n";
    //     }
    // }
    return 0;
}


// 5 3 4

// 3 4 . . .   => 7

//   3 + 4  = 7 
//   7 + 7  = 14 % 10 = 4 == 2*(7)
//   14 + 4  = 18 % 10 = 8 = 4 *(7)
//   18 + 8  = 26;



// 34748 => 26



// 13 8 1

// 8 1 . . . . . . . . . . . 

// 819862
