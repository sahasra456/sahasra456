#include<stdio.h>
int fib(int n){
	if(n==0 || n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
main()
{
	int n,res;
	printf("enter a value:");
	scanf("%d",&n);
		res=fib(n);
		printf("%d ",res);
	
}