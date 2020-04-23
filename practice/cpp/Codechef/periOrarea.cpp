#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){

    EXECUTE_FASTER;
    int l,b,area,peri;
    cin  >> l >> b;
    area = 2 * l * b;
    peri = 2* (l + b);

    if(area > peri) 
    cout << "Area\n" << area << endl; 
    else if(area < peri) 
      cout << "Peri\n" << peri <<endl;
    else
        cout << "Eq\n" << area << endl;  

    return 0;
}