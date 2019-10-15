#include<stdio.h>
#include<string.h>
int main()
{
	/*L= length of substrings, length_S= Length of String,n_duplicates = No. of Duplicates, */
	int L,length_S,n_duplicates=0,x=0,y=1; /*x and y are variables used to reset the value of index_pattern(index of the string pattern which is stored as array) and j */
	int i=0,j,index_pattern=0;
	char pattern[500];
	scanf("%s %d",pattern,&L);
	length_S =strlen(pattern);
	int a = length_S - L + 1 ; // a gives the number of substrings of length L
	char rows[500][500];


	if ( L> 0)
	{
	 	 if(L<=length_S)	// length of substring  has to be greater than length of string and also greater than 0
	 	 {

       		 while ( i < a)          // We are arranging all substrings rowwise and using variable x to reset the value of index_pattern = 0
		{	
			index_pattern = x;	

               		 for(j=0;j<L; j++)
			{
                       		 rows[i][j] = pattern[index_pattern];
                       		 index_pattern++;
			}

                j=0;
                x++;
                i++;
		}

        i=0,j=0;	//resetting the value of i and j to use it in the next loop instead of using different variables


        while(i<a)
	{
		 j=y;

               while( j > i  && j < a )		//We are going row-wise comparing strings(suppose i=0 is a rown we compare it with all j such that 1<j<a and each time there is a duplicate we increment a variable and then finally subtract it from a
			{

                       if((strcmp(rows[i],rows[j])==0))
		       {
				n_duplicates++;
				break;
		       }
		j++;
			}	


                y++;
                i++;
        }

	printf("%d\n",a-n_duplicates);
        }

	else
	{
		printf("0\n");
	}		
		
}
return 0;
}
