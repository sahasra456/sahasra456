#include<stdio.h>
int main()
{
	int n,sum=0,r,n1,n2,i;
	printf("enter n1,n2 values:");
	scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
	{
	n=i;
	while(n!=0)
	    {
	     r=n%10;
	     sum=sum+r;
	     n=n/10;
	       	
		}
    }
	    printf("sum=%d",sum);
}
