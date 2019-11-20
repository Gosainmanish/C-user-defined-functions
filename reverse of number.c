#include<stdio.h>
main()
{
          int n,b;
          printf("\n enter any number:");
          scanf("%d",&n);
          printf("\n reverse of entered number :%d",b=reversedigit(n));
          return 0;
}
reversedigit(int x)
{
          int reverse=0;
          while(x!=0)
          {
                    reverse=reverse*10;
                    reverse=reverse+x%10;
                    x=x/10;
          }
return reverse;
}
