#include<stdio.h>
int main()
{
	int n,i;
	float res;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0 && i*i==n)
		res=i;
	}
	printf("%.2f",res);
	return 0;
}
