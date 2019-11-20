#include<stdio.h>
void main()
{
          int n,b;
          printf("\n enter any number:");
          scanf("%d",&n);
          printf("FACTORIAL of entered numbered=%d",b=a(n));
}
a(int a)
{
          int f=1,k;
          for(k=1;k<=a;k++)
          {
                    f=k*f;
          }
          return f;
}
