#include<stdio.h>
int find_largest(int [],int);
int main()
{
          int arr[30],size,largest,i;
          printf("\n enter how any numbers you want to enter :");
          scanf("%d",&size);
          printf("\n enter the %d integers numbers : ",size);
          for(i=0;i<size;i++)
          {
          scanf("%d",&arr[i]);
          }
          largest=find_largest(arr,size);
          printf("\nThe largest element is: %d\n",largest);
	return 0;
}
int find_largest(int arr1[],int size1)
{
          int temp_larg,i;
          temp_larg=arr1[0];
          for (i=0;i<size1;i++)
          {
                    if(arr1[i]>temp_larg)
    				temp_larg=arr1[i];
          }
          return temp_larg;
}
