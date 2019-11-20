#include<stdio.h>
void swap(int x,int y);
int main()
{
          int a,b;
          printf("\n enter the value of a : ");
          scanf("%d",&a);
          printf("\n enter the value of b : ");
          scanf("%d",&b);
          printf("\n ------BEFORE SWAPPING------");
          printf("\n a=%d \n b=%d",a,b);
          printf("\n -------AFTER SWAPPINNG------");
          swap(a,b);
          return 0;

}
void swap(int x,int y)
{
          x=x+y;
          y=x-y;
          x=x-y;
printf("\n a=%d \n b=%d",x,y);
}
