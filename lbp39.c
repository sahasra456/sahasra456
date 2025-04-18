#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x,y;
	printf("enter base:");
	scanf("%d",&a);
	printf("enter 1st power:");
	scanf("%d",&b);
	printf("enter 2nd power:");
	scanf("%d",&c);
	x=pow(a,b);
	y=pow(x,c);
	printf("res=%d",y);
}
