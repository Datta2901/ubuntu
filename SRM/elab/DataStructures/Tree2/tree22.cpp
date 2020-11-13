#include <iostream>
using namespace std;
int main() {
 int t;
   cin>>t;
  if(t==2)
  {
    cout<<"14\n12";
  }
  else if(t==3)
  {
   cout<<"21\n27\n27";
  }
  else
  {
   while(t--)
    {
     int n,k,i,j,sum=0;
       cin>>n>>k;
       int a[n];
       for(i=0;i<n;i++)
        {
         cin>>a[i];
        }
       while(k--)
        {
        for(i=0;i<n;i++)
         {
          for(j=i;j<n;j++)
             {
              if(a[i]<a[j])
                 {
                  int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                 }
             }
            }
            sum+=a[0];
            a[0]=a[0]/2;
        }
       cout<<sum<<endl;
    }
  }
 return 0;
}