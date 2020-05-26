#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    n = n+1;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j= 0; j < n; j++){
            if(j != n-1){
                cout << "*-" ;
            }else{
                cout <<"*";
            }
        }
        cout << endl;
        if(count < n-1){
            for(int k = 0; k < n; k++){
            cout << "|" <<" ";
            }
            cout << endl;
            count++;
        }   
        
    }
    return 0;
}