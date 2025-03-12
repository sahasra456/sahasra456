#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	int n;
	printf("enter the month:");
	scanf("%s",&a);
	printf("enter the value of n:");
	scanf("%d",&n);
	if(strcmp (a,"july")==0 && n==5)
	{ 
	  printf("1");
	}
	else 
	{
	  printf("0");
	}
}
