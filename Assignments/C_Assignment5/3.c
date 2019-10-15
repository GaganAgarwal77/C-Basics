#include<stdio.h>
#include<stdlib.h>
int merge_count = 0;//defining merge count outside the Merge_sort function to use it in main
int merge(long int numbers[], int min, int average,int max)
	{//Defining a merge function that takes input of array, the starting index, the middle index and final index
	   int n_1 = average - min + 1;//array_1 is from min index to average(middle) index ,hence number of elements is average-min+1
	   int n_2 = max - average;//array_2 is from average + 1 to max index, hence number of elements is max-(average+1)+1
	   int i,j,k;//defining loop variables
	   long int array_1[n_1];//initializing two temporary arrays to split the unsorted array
	   long int array_2[n_2];
	   i = 0; 
	   while(i < n_1)
	   {
	       array_1[i]=numbers[i+min];//putting values into array_1 
           i++;	   
	   }
	   j = 0;
	   while(j < n_2)
	   {
	       array_2[j] =numbers[j+average+1];//putting the rest of the values into array_2
	       j++;
	   }
	   i=0,j=0;//resetting the values of i and j
	   for(k = min; i < n_1 && j < n_2; k++)
	   {//setting value of k to min and running a loop to overwrite the elements of unsorted array by comparing the values from the split arrays
	       if (array_1[i] > array_2[j])//comparing values of array_1 and array_2
	       {
	           numbers[k] = array_2[j];
	           j++;
	       }
	       else
	       {
	           numbers[k] = array_1[i];
	           i++;
	       }
	   }
	   for(;i < n_1;i++,k++)
	   {//if elements in array_1 are left after all the elements of  array_2
	       numbers[k] = array_1[i];
	   }
	   for(;j < n_2;j++,k++)
	   {//if elements in array_2 are left after all the elements of  array_1
	       numbers[k] = array_2[j];
	   }
	}
int Merge_sort(long int numbers[],int min,int max)
{
   if (max > min) //Only when the maximum index is greater than minimum index that means there is more than one element in the unsorted array then only we cal te Merge_sort function and merge function
    {
        int average = (max+min)/2;
        Merge_sort(numbers,min,average);
        Merge_sort(numbers,average+1,max);
        merge(numbers,min,average,max);
        merge_count++;//to count the number of times merge function is called
    }
    
}       
int input_array(long int Array[],int x)
{//defining a function to take input of x integers seperated by commas
    for(int i = 0; i < x; i++)
	{
	    //Using for loop to take input of n integers seperated by commas
	    scanf("%ld,",&Array[i]);
	}
}
int print_array(long int Array[],int x)
{//defining a function to print the sorted array
    for(int a = 0 ; a < x ; a++)
	{
    	printf("%ld ",Array[a]);//printing the sorted array using for loop
	}
}
int main() 
{
    long int nums[1000];//giving arbitrary value to size of array
    int n;
    scanf("%d\n",&n);//taking input of number of integers in array
    input_array(nums,n);//calling input function
	Merge_sort(nums,0,n-1);//calling Merge_sort function
	print_array(nums,n);//calling print array function
	printf("\n%d",merge_count);//printing the merge count
    return 0;
}
	
	       