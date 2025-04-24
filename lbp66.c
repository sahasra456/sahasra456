#include<stdio.h>
int main()
{
	int n,a=0,b=1,temp,i,sum;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+a;
	    temp=a+b;
		a=b;
		b=temp;
	}
	printf("%d",sum);
	return 0;
}
