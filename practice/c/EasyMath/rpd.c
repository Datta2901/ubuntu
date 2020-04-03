#include <stdio.h>
#include <stdlib.h>
int digit_sum(int a,int b){
    long int p=a*b;
    int s=0;
    while(p>0){
        s+=(p%10);
        p/=10;
    }
    return s;
}

int main()
{
int T,n;
scanf("%d",&T);
while(T--){
   scanf("%d",&n);
   int *arr;
   arr =(int*)malloc(n*sizeof(int));
   int sum,max=0;
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        sum=digit_sum(arr[i],arr[j]);
        if(sum>max){
            max=sum;
        }
    }
   }
   printf("%d\n",max);
}

return 0;
        }