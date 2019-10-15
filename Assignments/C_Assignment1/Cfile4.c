#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{ 
	double a,b,c;
	printf("Enter the coeffficents of the quadratic eqaution ax^2 +bx+ c =0 whose roots you would like to know: \n");	
	printf("Enter a \n"); 
	scanf ("%lf",&a);
	printf("Enter b \n"); 
	scanf ("%lf",&b);
	printf("Enter c \n"); 
	scanf ("%lf",&c);

	double determinant;

	determinant = (b*b) - (4*a*c) ;
	double root1,root2;
	
	root1 = (-b+sqrt(determinant))/(2*a) ;
	root2 = (-b-sqrt(determinant))/(2*a) ;
	if (determinant > 0) 
{
	printf("The roots of the given equation are : %.2lf , %.2lf\n", root1, root2);
}
else
{
	double x,y ;
	x= (-b/2*a) ;
	y= (sqrt(-1*determinant))/(2*a) ;
	double c_root1,c_root2;
	printf("The roots of the given equation are: %.2lf+i%.2lf, and %.2lf-i%.2lf.\n",x,y,x,y); 
}
return 0;
}
