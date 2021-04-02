#include<iostream>
using namespace std;
int main(){
    if(fopen("input.txt","r"))
         {
             freopen("input.txt","r",stdin);
             freopen("output.txt","a",stdout);
    cout << 1e5 << endl;
    for(int  i = 1; i <=1e5; i++){
        cout << i << endl;
    }
    return 0;
}