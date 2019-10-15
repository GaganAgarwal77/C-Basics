#include<stdio.h>
#include<math.h>
int Selection_sort(long int numbers[])
{
	int index;
   long int c;//defining a temporary variable
    int swap_count=0;//for measuring no. of swaps made
    int no_comparisons=0;//for measuring no. of comparisons made
    long long int minimum = numbers[0];
   for(int k = 0; k < 19; k++)//using for loop to go through the array multiple times each time changing to the next minimum value
   {
   for (int i = k; i < 20 ; i++)
    {
        if(numbers[i] < minimum)//setting minimum to initial element and comparing it with other elements to find minimum 
        {
           minimum = numbers[i];
          index = i;//index of the element which is least in value
        }
        no_comparisons++;//measuring the number of comparisons by incremening the variable
    }
   
    c = numbers[k];
    numbers[k] = numbers[index];//using a temporary variable to swap the minimum element with the starting index element 
    numbers[index] = c;
    swap_count +=1;
    minimum=pow(2,41);//resetting the value of minimum
   }
	for(int a =0 ; a < 20 ; a++)
        {
        printf("%ld ",numbers[a]);//printing the sorted array
        }
        printf("\n");//moving to next line
        printf("%d ",swap_count);
        //printing number of swaps made and number of comparisons made
   	 printf("%d",no_comparisons-19);
}
int main() {
    long int numbers[20];//Creating an array of 20 integers
	for(int j = 0; j < 20; j++)
	{
	    //Using for loop to take input of 20 integers one by one
	    scanf("%ld,",&numbers[j]);
	}
	Selection_sort(numbers);
	return 0;
}

