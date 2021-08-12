#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int Tballs,target,runs,bowled;
    cin >> Tballs >> target >> runs >> bowled;
    float overT = float(Tballs) / 6 ;
    cout << fixed << setprecision(1) << overT << endl;
    float oversB = bowled / 6 + 0.1 * (bowled % 6);
    cout << fixed << setprecision(1) << oversB << endl;
    float cc = float(runs) / oversB;
    cout << fixed << setprecision(1) << cc << endl;
    cc = target / overT ;
    cout << fixed << setprecision(1) << cc << endl;
    if(cc <= 36){
        cout << "Eligible to Win" << endl;
    }else{
        cout << "Not Eligible to Win" << endl;
    }
    return 0;
}