#include<bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int )

int main(){
    int a,b,c,d;
    cin  >> a >> b >> c >> d;
    cout << max(max(a,b),max(c,d)) << endl;
    return 0;
}