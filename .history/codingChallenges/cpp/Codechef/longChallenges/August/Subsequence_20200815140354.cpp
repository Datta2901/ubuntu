#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll ModuloExponentiation(ll a,ll b,ll m){
    ll res = 1;
    while(b > 0){
        if(b & 1){
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        long long int size;
        cin >> size;
        vector<long long int> data;
        unordered_map<long int ,long int> freq;
        for(long long int i = 0; i < size; i++){
            long long int a;
            cin >> a;
            data.push_back(a);
            freq[a]++;
        }
        bool flag = true;
        for(auto it = freq.begin(); it != freq.end(); it++){
            if(it->second > 1){
                flag = false;
                break;
            }
        }
        if(flag){
            for(long long int  i = 1; i <= size; i++){
                cout << ModuloExponentiation(2,size - i,1000000007) << " ";
            }
        }else{
            long long int answer = 0;
            for(int i = 0; i < freq.size(); i++){
                for(int j = 0; j < freq.size(); j++){
                    if(freq[i] > freq[j]){
                        answer *= min(freq[j],freq[i]) 1000000007
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}