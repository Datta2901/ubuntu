#include <stdio.h>

int main() 
{
    
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        int a;
        float b;
        int c;
        scanf("%d%f%d",&a,&b,&c);
        if(a > 50 && b < 0.7 && c > 5600){
            printf("10\n");
        }
        else if(a > 50 && b < 0.7 ){
            printf("9\n");
        }
        else if(b < 0.7 && c > 5600 ){
            printf("8\n");
        }
        else if(a > 50 && c > 5600){
            printf("7\n");
        }
        else if(a > 50 || b < 0.7 || c > 5600){
            printf("6\n");
            
        }
        else{
            printf("5\n");
        }
    }
	return 0;
}

