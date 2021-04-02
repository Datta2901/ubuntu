#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int c=0,d=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='<'){
                c++;
            }else{
                if(s[i]=='>'){
                    c--;
                }
            }
            if(c==0){
                d=i+1;
            }
            if(c<0){
                break;
            }
        }
        cout<<d<<"\n";
    }
	// your code goes here
	return 0;
}
