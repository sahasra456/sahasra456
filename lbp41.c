#include<stdio.h>
int num(int n)
{
	int res;
	res=n+n;
	return res;
}
int main()
{
	int n,res;
	scanf("%d",&n);
	res=num(n);
	printf("%d",res);
	return 1;
}
