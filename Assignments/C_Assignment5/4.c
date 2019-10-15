#include <stdio.h>
int partition(long int Array[], int min, int max)
{
    long int pivot = Array[max]; //setting pivot to last element of unsorted array
    int p_index = min;//setting the partition index to minimum 
    for(int i = min; i < max; i++)
    {// going through the array from start to last but one index
        if(Array[i] <= pivot)
        {//if any element is less than  pivot it is swapped and the partition index is  incremented to move to the next element
            long int c = Array[i];
            Array[i] = Array[p_index];//swapping the element at p_index with a value that is less than pivot
            Array[p_index] = c;
            p_index++;
        }
    }
    long int d = Array[p_index];
    Array[p_index] =Array[max];//At the end after all elements less than pivot are to the left of element at partition index,we swap the element at partition index with pivot
    Array[max] = d;
    return p_index;
}
int Quick_sort(long int Array[], int min, int max)
{
    if(max > min)
    {   //Calling the Quick sort function recursively by making sure maximum index is greater than minimum index
    int p_index = partition(Array,min,max);
    Quick_sort(Array,min,p_index-1);
    Quick_sort(Array,p_index+1,max);
    }
}
void input_array(long int Array[],int x)
{//defining a function to take input of x integers seperated by commas
    for(int i = 0; i < x; i++)
	{
	    //Using for loop to take input of n integers seperated by commas
	    scanf("%ld,",&Array[i]);
	}
}
void print_array(long int Array[],int x)
{//defining a function to print the sorted array
    for(int a = 0 ; a < x ; a++)
	{
    	printf("%ld ",Array[a]);//printing the sorted array using for loop
	}
}
int main() 
{
	//code
	long int nums[1000];//giving arbitrary value to size of array
    int n;
    scanf("%d\n",&n);//taking input of number of integers in array
    input_array(nums,n);//calling input function
    int maximum = nums[n-1];
    int pivot_index =0;
	Quick_sort(nums,0,n-1);//calling Quick_sort function
	int x=0;
	while( x < n )
    {
     if (nums[x] == maximum)
     {
         pivot_index = x;//To find at what index is the initial pivot after sorting
         break;
     }
     x++;
    }
	print_array(nums,n);//calling print array function
	printf("\n%d",pivot_index);//printing the initial pivot index 
	return 0;
}