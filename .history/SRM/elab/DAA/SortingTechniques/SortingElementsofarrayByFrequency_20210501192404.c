#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,n;
	    scanf("%d",&n);
	    int a[n],b[n],p;
	    for(i=0;i<n;i++)
	     scanf("%d",&a[i]);
	    int h[61]={0}; 
	    for(i=0;i<n;i++) 
	      h[a[i]]++;
	     int j,l;
	    for(i=0;i<61;i++)
	    {
	        int max=0;
	       for(j=0;j<61;j++)
	       {
	          if(h[j]>max)
	          {
	              max=h[j];
	              l=j;
	          }
	       }
	       for(p=0;p<max;p++)
	        printf("%d ",l);
	       h[l]=0; 
	    }
	    printf("\n");
	}
	return 0;
}