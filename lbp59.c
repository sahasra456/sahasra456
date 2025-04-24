#include<stdio.h>
int main()
{
	int n,m,i,j,count,c=0,sum=0;
	float avg;
	printf("enter the range:");
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			c++;
			printf("%d",i);
			sum=sum+i;
		}
	}
	avg=(float)sum/c;
	printf("\n%2f",avg);
}
