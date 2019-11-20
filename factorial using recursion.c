#include<stdio.h>

long factorial(int);
int main()
{
          int n;
          long f;

          printf("\n Enter any integer number :");
          scanf("%d",&n);

          if (n<0)
          printf("\n Negative no.s not allowed ");
          else
          {
                    f=factorial(n);
                    printf("%d!=%d \n",n,f);
          }
          return 0;
}
long factorial(int n)
{
          if (n==0)
          return 1;
          else
          return (n*factorial(n-1));
}
