#include<iostream>
using namespace std;
void sum(int x,int y = 0){
    cout<<x+y;  
}
int main(){
    sum(10);
    sum(10,0);
    sum(10,10);
return 0;
}