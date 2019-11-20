#include<stdio.h>
void main()
{
          int i=3;
          int *j;
          j=&i;
          printf("\n i=3 \n *j");
          printf("\n j=&i");
          printf("\n &i = %d",&i);
          printf("\n j = %d",j);
          printf("\n &j = %d",&j);
          printf("\n *j = %d",*j);
          printf("\n i = %d",i);
}

