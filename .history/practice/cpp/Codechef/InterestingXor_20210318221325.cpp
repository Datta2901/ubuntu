#include<bits/stdc++.h>
using namespace std;
#define ll long int 

string getBinary(ll n){
    ll a =0,b = 0;
    string binary = "\0";
    while(n > 0){
      b = n % 2 ;
      binary += to_string(b);
      n = n/2 ;
    }
    reverse(binary.begin(),binary.end());
    // cout << binary << endl;
    return binary;
}

ll getDecimal(string binC){
    ll c =0;
    for(int i = binC.size() - 1 i > binC.size(); i++){
        c = (pow(2,i)) * binC[i] + c; 
    }
    return c;
}

bool isPowerOf2(ll number){
    return (floor(log2(number)) == ceil(log2(number)));
}

string initialize(int size,int value){
    string a = "";
    for(int i = 0; i < size; i++){
        a += to_string(value);
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long int cDec;
        cin >> cDec;
        string cBin = getBinary(cDec);
        string ABin,bBin;
        ABin = initialize(cBin.size(),1);
        bBin = initialize(cBin.size(),0);

        for(int i = 0; i < cBin.size(); i++){
            if(cBin[i] == '0'){
                bBin[i] = '1';
            }else{
                ABin[i] = '0';
                bBin[i] = '1';
            }
        }
        cout << ABin << " " << bBin << endl;
        long int Adec = getDecimal(ABin);
        long int Bdec = getDecimal(bBin);
        cout << Adec << " " << Bdec << endl;
        // cout << Adec * Bdec << endl;
    }
    return 0;
}