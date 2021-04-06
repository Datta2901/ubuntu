#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<long int> a;
        for(int i = 0; i < size; i++){
            long int rating;
            cin >> rating;
            a.push_back(rating);
        }
        long long int  sum = max(a[1]+a[a.size()-1]+a[a.size()-2],a[2]+a[1]+a[a.size()-1]),total = 0;

        for(int i = 0; i < size; i++){
            total += a[i];
            sum = max(sum,total);
            total = 0;
            i--;
        }
    cout << sum << endl;
    }
    return 0;
}