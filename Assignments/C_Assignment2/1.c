#include <stdio.h>
int main()
{
int a,b,c,GCD;
scanf("%d %d" ,&a,&b);
a = (a>=0)?a:-a;
b = (b>=0)?b:-b;
if (a==0&& b==0)
{
    printf("Invalid input");
}
else
{
while (b!=0)
    {
       c = b;
       b = (a%b);
       a = c;
    }
    GCD = a;
    printf("%d",GCD);
}
return 0;
}
