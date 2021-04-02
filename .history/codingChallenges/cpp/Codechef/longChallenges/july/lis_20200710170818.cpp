#include<bits/stdc++.h>
using namespace std;
 
int main() {
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     scanf("%d", &x);
    //     vector<int>::iterator it = lower_bound(d.begin(), d.end(), x);
    //     if (it == d.end()){ d.push_back(x) ;cout << x;}
    //     else *it = x;
    // }
    // printf("LIS = %d\n", d.size());
    int size;
    cin >> size;
    vector<int> number,lis;
    vector<int>:: iterator it;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        number.push_back(a);
    }
    d.pb(number[0])
    for(int i = 1; i < size; i++){
        it = lower_bound(lis.begin(),lis.end(),number[i]);
        if(it )
    }
    return 0;
}