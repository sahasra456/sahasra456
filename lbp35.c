#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(n%i==0)
	{
		count++;
	}
	if(count==2)
	    printf("it is a prime number\n");
	else
	    printf("it is not a prime number\n");
}
