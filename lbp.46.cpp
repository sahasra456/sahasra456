#include<stdio.h>
int main()
{
  int s,e,ct;
  printf("enter start range");
  scanf("%d",&s);
  printf("enter end range");
  scanf("%d",&e);
  if(s>=1&&e>=1){
  	for(int i=s;i<=e;i++){
	  
  	        ct=0;
  	        for(int j=2;j<1;j++){
  	        	if(i%j==0){
  	        		ct++;
				  }
			  }
  	        if(ct==0&&i!=1){
  	        	printf("%d",i);
			  }
        }
	}
  }
