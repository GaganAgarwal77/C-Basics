#include<stdio.h>
#include<stdlib.h>

int main()
{
  	int a,b;	
		printf("Enter a :\n");
  		scanf("%d",&a);
		printf("Enter b :\n");
        	scanf("%d",&b);
	if (a>0 && b>0 && a>b) 
	{	
     	printf("Remainder Output: %d\n", a % b);
	}
 	else if (a>0 && b>0 && b>a) 
	{
 	printf("Remainder Output: %d\n", b % a);
	}
	else if (a<0 || b<0)
	{
		printf("Invalid integers....error\n");
	}
	

}
  	

