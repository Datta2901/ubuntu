#include <iostream>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        long int a,b,answer;
        cin >> a >> b;
        int c;
        cin >> c;
        if(c % 2 == 0){
            answer = max(a,b)/min(a,b);
        }else{
            answer =max(2*a,b)/min(2*a,b);
        }
        cout << answer << endl ;
    }

    return 0 ;
}