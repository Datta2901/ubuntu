#include<bits/stdc++.h>
#include<vector>
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define testcase() int t; cin >> t; while(t--)
using namespace std;
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","a",stdout);
        int t;
        int num;
        cin >> t;
        while(t--){
            vector<long long int> numb;
            cin >> num;
            long long int product = 1;
            for(int i = 0; num > 0; i++,num = num/10){
                if(num % 10 != 0){
                    numb.push_back(product * (num % 10));
                }
                product *= 10;
            }
            cout << numb.size() << endl;
            printVect(numb,long long int);
            cout << endl;
        }

    
    return 0 ;
}