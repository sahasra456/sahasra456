#include<stdio.h>
int main()
{
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	if(n%2!=0)
	printf("weird\n");
	if(n%2==0 && n>=2 && n<=5)
	printf("not weird\n");
	if(n%2==0 && n>=6 && n<=20)
	printf("weird\n");
	if(n%2==0 && n>=20)
	printf("not weird\n");
}
