#include<stdio.h>
int fib(int n);
int main()
{
	int i,n,res;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		res=fib(i);
		printf("res=%d",res);
    }
        return 0;
}
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==0||n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
