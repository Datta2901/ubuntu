#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char a,b;
    cin >> a >> b;
    try{
        if('A'<=a &&'Z'>=a){
            cout << "#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){


    return 0;
}" << endl;
        }else{
            throw(b);
        }

    }catch(char){
        cout << "" << endl;
    }
    return 0;
}