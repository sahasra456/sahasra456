#include<stdio.h>
int main()
{
	int n,sum,r;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>=0)
	{
		r=n%10;
		if(n%2==0)
		n=sum+n;
		n=n/10;
	}
	printf("%d",n);
}
