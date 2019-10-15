#include<stdio.h>
int main()
{
    int a;
    int num_primes = 0;
    scanf("%d",&a);
    if (a<=1)
    {
        printf("%d",0);
    }
else
{
      for(int i=2; i<=a;i++)
      {
          int num_factors =0;
          for(int j=1;j<=i;j++)
          {
          if(i%j==0)
            num_factors++;
          }
          if(num_factors==2)
             num_primes++;
      }
    printf("%d",num_primes);

}
return 0;
}
