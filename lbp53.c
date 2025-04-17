#include<stdio.h>
int main()
{
	int distance,speed,time;
	printf("enter speed:");
	scanf("%d",&speed);
	printf("enter time:");
	scanf("%d",&time);
	distance=speed*time;
	printf("distance=%d",distance);
}
