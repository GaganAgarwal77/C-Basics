#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int array[10];
int x; //Integer that is to be found in the list of numbers
for(int i = 0; i < 10; i++) //To take input separated by commas
{
	scanf("%d,",&array[i]);
}
scanf("%d",&x); 
int start = 0; //starting index
int end = 9; //ending index
int average; //Index of average of the start and end
int output = 0; //Final output of whether x is found in the list or not
int no_of_comparisons = 0; //No. of Comparisons made in the process of finding x in the list
for(int j = 0 ; j < 10; j++)
{
	if(start > end) 
    {
	// For the number to be found in the list starting index must always be less than or equal to the ending index 
		output = 0;
		break;
	}
	average = floor((start+end)/2);
	if(array[average] < x) 
	{
		start = average + 1; //Increasing the value of the starting index to reduce number of Comparisons
		no_of_comparisons ++;
	}
	
	else if (array[average] > x)
	{
		end = average - 1; //Decreasing the value of the ending index to reduce number of Comparisons
		no_of_comparisons ++;
	}
	
	else //If both starting and ending index are same then they indicate the number
	{
		no_of_comparisons ++;
		output = 1; 
		break;
	}

}
printf("%d %d\n",output, no_of_comparisons);
return 0;
}
