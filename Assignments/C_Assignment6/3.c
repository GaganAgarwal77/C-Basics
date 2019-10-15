#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
	char *str1,*str2,*str; 
	int l1=0,l2=0,n =550,b =275;
	str1 = (char*)malloc(b * sizeof(char));//assigning memory for storing a maximum of 275 characters for two strings
	str2 = (char*)malloc(b * sizeof(char));//assigning memory for storing a maximum of 275 characters for two strings
	str =  (char*)malloc(n * sizeof(char));//assigning memory for storing a maximum of 550 characters for two strings
	scanf("%s",str1);//taking input of first string
	l1 = strlen(str1);//measures the length of the first string 
	scanf("%s",str2);//taking input of the second string
        l2 = strlen(str2);//measures length of second string
	str =str1;//inserting the first string into the bigger pointer
	for (int i = 0; i <= l2; i++)
            str[i+l1] = *(str2+i); //putting second string into the bigger pointer after the first string
	printf("%s",str);//printing the conactenated string
	return 0;
}



