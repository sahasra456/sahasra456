#include<stdio.h>
int main()
{
	int n,i,rem,sum=0,pnum;
	printf("enter the number:");
	scanf("%d",&n);
	pnum=n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	if(pnum%sum==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
