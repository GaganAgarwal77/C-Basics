#include<stdio.h>
#include<stdlib.h>

int main()
{
	double temp_C;
	double temp_F;
	printf("Enter the temperature in Centigrade Scale:\n");
	scanf("%lf",&temp_C);
	temp_F = 1.8*temp_C + 32 ;
 	printf("The temperature in Farenhiet Scale is %lf\n",temp_F);

return 0;
}
	
