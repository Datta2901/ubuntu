#include<bits/stdc++.h>
using namespace std;

void printSums(int N){
    int start = 1,end = 1,sum = 1;
    while(start <= N/2){
        if(sum < N){
            end = end + 1;
            sum += end;
        }else if(sum > N){
            sum -= start;
            start = start + 1;
        }else{
            for(int i = start; i <= end; i++){
                cout << i << " "; 
            }
            cout << endl;
            sum = sum - start;
            start = start + 1;
        }
    }
}

int main(){
    int N;
    cin >> N;
    printSums(N);
    return 0;
}
/*
    #include <stdio.h>

int main()
{
    int a,k;
    scanf("%d",&a);
    int arr[a],s=0,l,i,j;
    for(i=1;i<=a;i++)
    {
        arr[i]=i;
    }
    i=0;
    for(j=1;j<=a;j++)
    {
        i=j;
    l=i;
    for(;i<=a;i++)
    {
        s=s+arr[i];
        if(s==a){
        k=i;
        
//printf("%d %d",l,k);
for(i=l;i<=k;i++)
{if(arr[i]!=a)
    printf("%d ",arr[i]);
}
            printf("\n");
        }}
s=0;}
return 0;
}





*/