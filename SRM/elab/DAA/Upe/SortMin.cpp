#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf ("%d",&t);
     while (t--){
    int n , a[10] , i;
    scanf ("%d",&n);
    for (i=0; i<n; i++)
    scanf ("%d",&a[i]); 
    for (i=1; i<n; i++)
    if ( a[i] < a[i-1] ){
    printf ("%d\n",a[i]);
    break;
    }
    if (i==n)
    printf ("%d\n",a[0]);
    }
return 0;
}
