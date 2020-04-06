// answer
#include<iostream>
using namespace std ;
int main()
{ 
    int t ;
    int a=0 ;
    int flag;
    cin>>t ;
    while(t--)
    {
        int size,c=0,a=0,d=0 ;
        cin>>size ;
        int stand[size] ;
        for(int i=0;i<size;i++)
        {
            cin>>stand[i] ;
        }
          
        int start = 0,end = size-1;
        for (int j=0 ;j<size;j++){
            if(stand[j] == 1){
                break;
            }
            start++;
        }
        for (int j=size-1;j>=0;j--){
            if(stand[j] == 1){
                break;
            }
            end--;
        }
        c = 0;
        flag = 0;
        for(int i=start+1;i<=end;i++)
        {
            if(stand[i] == 1) {
                if (c < 5) {
                    flag = 1;
                    break;
                }
                else {
                    c = 0;
                }
                
            } else{
                c ++;
            }
                      
        }
        if(flag==1)
        {
            cout<<"NO\n" ; 
            continue;
        }

        cout<<"YES\n" ;
        
    }
    return 0 ;
}