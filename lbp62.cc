#include<stdio.h>
int main()
{
	int n1,n2,sum=0,rem,n,i;
	printf("enter n1,n2");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		sum=0;
		n=i;
		while(n>0)
		{
			rem=n%10;
			sum=sum+rem*rem*rem;
			n=n/10;
		}
		if(sum==i)
		printf("%d",i);
	}
}
