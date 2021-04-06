// https://www.codechef.com/LRNDSA06/problems/CHEFSUM
#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int size,min,index;
        cin >> size;
        min = 1e6;
        for(int i = 0; i < size; i++){      // (sum - prefixsum + answer[i]) + prefixSum   = answer[i]
            int a;                          //    =  suffixSum
            cin >> a;
            if(min > a){                    //it is enough to find 
                min = a;
                index = i + 1;
            }
        }
        cout << index << endl;
    }

    return 0;
}