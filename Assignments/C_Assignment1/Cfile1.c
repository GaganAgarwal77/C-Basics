#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("This is an Area Calculator\n");   
  float radius;
  printf("Enter the radius of the circle whose area you would like to know:\n ");
  scanf("%f",&radius);
  float area;
  area = 3.14*radius*radius;
if (radius > 0)
{
  printf("The Area of the Circle is %f \n",area);
}
else {
  printf("Invalid Radius....Error\n");
  printf("Please enter the radius again:");/*Letting the user try again incase he typed a negative sign by mistake */
  scanf("%f",&radius);
  printf("The Area of the Circle is %f \n",area);
   
}
 return 0;
}
  

  

