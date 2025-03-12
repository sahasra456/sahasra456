#include<stdio.h>
 int main(){
int n,key,r=0,c;
printf("enter the number");
scanf("%d",&n);
printf("enter key");
scanf("%d",&key);
while (n!=0){
	int rem=n%10;
	if(rem==key){
		c++;
	}
	n=n/10;
}
printf("%d is the number of occurance",c);
	}
