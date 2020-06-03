#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define pb push_back
#define endl '\n'
using namespace std;
// Return Value from find() method
// The find() method returns an integer value: If the substring exists inside the string, it returns the index of the first occurence of the substring. If substring doesn't exist inside the string, it returns -1.
int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        string binaryStr;
        cin >> binaryStr;
        int pos = binaryStr.find("010");
        int answer = binaryStr.find("101");
        if(answer == -1 && pos == -1){
            cout << "Bad\n";
        }else{
            cout << "Good\n";
        }
    }
}