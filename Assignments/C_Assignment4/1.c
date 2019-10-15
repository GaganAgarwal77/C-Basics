#include<stdio.h>
int main()
{
// Making an array to take input
int array[10];
for (int i = 0 ; i < 10 ; i++) 
{
	scanf("%d,",&array[i]); //To take input separated by commas
}
for (int j = 9; j >= 0; j--)
{
	printf("%d ",array[j]); 
	//For Printing the integers in reverse order
}
return 0;
}
