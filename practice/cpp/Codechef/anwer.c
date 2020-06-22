#include<stdio.h>
#include<math.h>
int main()
{
    int t,count=0;
    scanf("%d",&t);
    int x1,x2,x3,y1,y2,y3,a,b,c;
    while(t--)
    {
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	a = pow((x3-x2),2)+ pow((y3-y2),2);
	b = pow((x1-x2),2)+ pow((y1-y2),2);
	c = pow((x1-x3),2)+ pow((y1-y3),2);
	if(a == b + c || b == a + c || c == a + b)
        count++;
	}
    printf("%d\n",count);
    return 0;
}