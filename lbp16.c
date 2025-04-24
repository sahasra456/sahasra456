#include<stdio.h>
#include<string.h>
int main()
{
	char keyword[10][10]={"float","double","int","start","break","else","switch","if","while","for"};
	char string[10];
	int temp,i;
	temp=0;
	printf("enter any string:");
	gets(string);
	for(i=0;i<10;i++)
	{
		if(strcmp(string,keyword[i])==0)
		temp=1;
	}
	if(temp==1)
	printf("true");
	else
	printf("false");
	return 1;
}
