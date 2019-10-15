#include <stdio.h>
int Bubble_sort(long int numbers[])
{
    int i,k,a;
	int n = 20;//size of array
	int swap_count = 0;//for measuring the number of swaps made
	int no_comparisons = 0;
    for (k = 1; k <= n-1 ; k++)//To go through the array n-1 times to make sure the array is sorted
	{
	    for(i = 0 ; i <= n-k-1; i++)
	    {
	        if (numbers[i] > numbers[i+1])//We swap the elements only if the next number is leser than current number
	        {
	            int c; // using a temporary variable c to swap the adjacent elements 
	            c = numbers[i+1];
	            numbers[i+1] = numbers[i];
	            numbers[i] = c;
	            swap_count ++; //To measure number of swaps made 
	        }
	        no_comparisons++; //Measuring total number of comparisons made irrespective of whether swaps were made or not
	        
	    }
	    
	}
	
	for(a =0 ; a < n ; a++)
	{
	printf("%ld ",numbers[a]);//printing the sorted array
	}
	printf("\n");//moving to next line
	printf("%d ",swap_count);
	//printing number of swaps made and number of comparisons made
    printf("%d",no_comparisons);
}
int main() 
{

	long int numbers[20];//defining an array of 20 integers
    int n =20;
	for(int j = 0; j < n; j++)
	{
	    //Using for loop to take input of 20 integers one by one
	    scanf("%ld,",&numbers[j]);
	}
	Bubble_sort(numbers);
	
	return 0;
}