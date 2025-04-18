#include<stdio.h>
int main()
{
	char str[15];
	int i,count=0;
	printf("enter any string:");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	{
		count++;
	}
	printf("%d",count);
}
