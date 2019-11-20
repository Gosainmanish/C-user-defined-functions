#include<stdio.h>
void main()
{
          int n1,n2;

          printf("\n enter value of n1:");
          scanf("%d",&n1);

          printf("\n enter value of n2:");
          scanf("%d",&n2);

          printf("\n ---- BEFORE SWAPPING ----");
          printf("\n n1=%d \n n2=%d",n1,n2);

          printf("\n ---- AFTER SWAPPING ----");
          swap(&n1,&n2);
          printf("\n n1=%d \n n2=%d",n1,n2);

}
swap(int *x,int *y)
{
          int t;
          t=*x;
          *x=*y;
          *y=t;
          return 0;
}
