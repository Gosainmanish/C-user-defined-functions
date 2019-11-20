#include<stdio.h>
int power(int n1,int n2);
void main()
{
          int base,powerraised,result;

          printf("\n Enter base number :");
          scanf("%d",&base);

          printf("\n Enter power number(positive number) :");
          scanf("%d",&powerraised);

          result=power(base,powerraised);

          printf("\n %d^%d=%d",base,powerraised,result);

}
int power(int base,int powerraised)
{
          if (powerraised!=0)
                    return(base*power(base,powerraised-1));
          else
          return 1;
}

