// code to sort the given array using recursion and bubble sort
// refer: https://www.youtube.com/watch?v=nmhjrI-aW5o


#include<stdio.h>
#define swap(x,y) (temp=x,x=y,y=temp)

void bubble(int arr[],int x)
{
	int temp;
	if(x<2)
	{
		return;
	}
	bubble(arr,x-1);
	for(int i=0;i<x-1;i++)
        {
        	if(arr[i]>arr[i+1])
                {
                        swap(arr[i],arr[i+1]);
                }
        }

}

int main()
{
	int x=20;
	int array[]={1,2,4,3,5,6,7,8,9,11,10,12,13,14,15,17,16,19,18,20};
	bubble(array,x);
	for(int j=0;j<20;j++)
	{
		printf("%d ",array[j]);
	}
	return 0;
}
