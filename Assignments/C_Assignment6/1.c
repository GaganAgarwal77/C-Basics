#include <stdio.h>
#include<stdlib.h>
int main() {
	//code
	int *ptr,n;//declaring a pointer and an input integer
	scanf("%d ",&n);
	ptr = (int*)malloc(n * sizeof(int)); //assigining memory for storing n integers
	for (int i = 0; i < n; i++)
	{ 
            scanf("%d ", ptr+i); //storing the values of n integers one-by-one in consecutive addresses
	} 
	for ( int j = 0; j < n; j++ )
	{
	        printf("%d ",*(ptr + j));//printing the values present at consecutive addresses one by one
	}
	return 0;
}