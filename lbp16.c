#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	float l,f,t,km,miles;
	char fu[10],tu[10];
	printf("enter the lenth");
	scanf("%f",&l);
	printf("enter the unit");
	scanf("%s",&fu);
	scanf("%s",&tu);
	if(strcmp(fu, "meter") == 0 && strcmp(tu, "feet") == 0)
{
printf("%f",l+3);
}
else if (strcmp(fu, "km") == 0 && strcmp(tu, "feet") == 0)
{
	printf("%f\n",l*0.621371);
}
else
{
	printf("%f\n",l*0.3048);
}
return 0;
}
