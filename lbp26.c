#include<stdio.h>
int main()
{
	int n,a,b=0,c=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(n>0)
    {
       a=n%2;
       b=b+(a*c);
       c=c*10;
       n=n/2;
    }
	   printf("%d",b);  
return 1;
}
