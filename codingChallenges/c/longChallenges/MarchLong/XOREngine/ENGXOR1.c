#include <stdio.h>
int main(void) {
  // your code goes here
  int t;scanf("%d",&t);
  while(t--){
      int n,q;
      scanf("%d %d",&n,&q);
     int o=0,e=0;
     for(int i=0;i<n;i++){
         int a;scanf("%d",&a);
         if(__builtin_popcount(a)%2==1)
         o++;
         else
         e++;
     }
     for(int i=0;i<q;i++){
         int a;scanf("%d",&a);
         if(__builtin_popcount(a)%2==1)
         printf("%d %d\n",o,e);
         else
         printf("%d %d\n",e,o);
         
     }
     
      
  }
  return 0;
}

