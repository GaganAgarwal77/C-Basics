#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int x1,x2,y1,y2,r1,r2;
double a,b,c;
scanf("%d %d %d %d %d %d", &x1,&y1,&x2,&y2,&r1,&r2);
b = abs(r1-r2);
c = r1 + r2;
a = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))); 
if (r1>=0 && r2>=0)
{
/*C_1C_2=a(Distance between the Centres),For the circles to intersect |r1-r2|<= C_1C_2 <= r1+r2 */
	
	if(a <= c && a >= b)
	{
	printf("YES\n");
	}
	else
	{
	printf("NO\n");
	}
}
else
{
	printf("Invalid input\n");/*If the user inputs negative radius ,It will show Invalid Input*/
}
return 0;
}
