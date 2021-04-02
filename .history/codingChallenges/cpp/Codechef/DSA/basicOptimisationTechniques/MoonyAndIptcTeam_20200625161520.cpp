// https://www.codechef.com/LRNDSA06/submit/COG2002
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
        long long int  sum = max(a[0]+a[a.size()-1]+a[a.size()-2],a[1]+a[0]+a[a.size()-1]),total = 0;

        for(int i = 0,b = 1; i < size - 2; i++,b++){
            total = a[i] + a[i+1] + a[i+2];
            sum = max(total,sum);
        }
    cout << sum << endl;
    }
    // Time complexity is O()
    return 0;
}