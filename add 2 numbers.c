#include<stdio.h>

int main() {
   int num1, num2, res;

   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);

   //Call Function Sum With Two Parameters

   printf("\nAddition of two number is : %d",res = sum(num1, num2));
   return (0);
}

sum( num1, num2)
{
   int num3;
   num3 = num1 + num2;
   return (num3);
}
