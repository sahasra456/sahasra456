#include<stdio.h>
int main()
{
	int a,b,c,r;
	printf("enter the number:");
	scanf("%d%d%d",&a,&b,&c);
	while((r=a%b%c)!=0)
	{
		a=b;
		b=c;
		c=r;
	}
	printf("%d",c);
}
