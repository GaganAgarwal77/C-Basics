#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
	char* ptr1; //declaring a pointer
	int n = 551,count=0,common=0,count2=0;
	ptr1 = (char*)malloc(n * sizeof(char)); //creating a pointer to hold two strings of max size 255 each and a space character
        scanf("%s", ptr1);//storing the strings in the array 
	count = strlen(ptr1);
	scanf("%s", ptr1+count);
	count2 = strlen(ptr1)-count;
   
     for(int m=0; m < count ; m++)
    {
        if(count != count2)
        {
            printf("1"); //if the strings are of unequal length ,they are unequal
 	    break;
        }
        else if(*(ptr1+m)==(*(ptr1+m+count)))
        {
            common++; //comparing the ASCII values of characters string1 and string2 one by one  and incrementing a value to count the number of common characters 
        }
        else
        {
            printf("1"); //if any character is not same ,the loop will break
            break;
        }
    }
    if (common==count)
    {
        printf("0");    //finally if all the characters are same then output will be 0
    }
    free(ptr1);//freeing the allocated space
	return 0;
}


