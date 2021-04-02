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
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            if(min < a){
                min = a;
                index = i + 1;
            }
        }
        
    }


    return 0;
}