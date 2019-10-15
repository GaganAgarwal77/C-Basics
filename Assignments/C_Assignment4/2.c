#include<stdio.h>
int main()
{
int x;//Integer that is to be found in the list of numbers
int array[10];
for (int i = 0; i < 10; i++)
{
	scanf("%d,", &array[i]); //To take input separated by commas
}
scanf("%d",&x); 
int output = 0; //Final output of whether x is found in the list or not
int no_of_comparisons = 0; //No. of Comparisons made in the process of finding x in the list
for (int j = 0; j < 10; j++) 
{
	no_of_comparisons++;
	if (array[j] !=x) //Using if else inside for loop to compare x with all integers in the list and break the loop when x is found.
	{
		output = 0;
	}
	else
	{
	output = 1;
		break; 
	}
		
}
    printf("%d %d\n",output,no_of_comparisons);
return 0;
}
