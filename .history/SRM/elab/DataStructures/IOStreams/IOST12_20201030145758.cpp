#include <iostream>
using namespace std;
int main() {
    double pi;
    pi=(float)22/7;
    int n; cin>>n; int i;
    for( i=n;i>0;i--){
        cout.precision(i);
        cout<<pi<<endl;
    } 
    cout << endl;
    cout<<" previous Setting:" << 1;
 return 0;
}