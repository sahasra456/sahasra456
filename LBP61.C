# include<stdio.h>
int main()
{
	int i,a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("the lcm of two numbers is :");
	for(i=1;i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
		{
			printf("%d",i);
			break;
		}
	}
}
