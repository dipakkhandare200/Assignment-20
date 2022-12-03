//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int NumArray[5];
    int i,sum=0;
    int *str;
    printf("Enter the 5 elements:\n");
     for(i=0;i<5;i++)
    {
     scanf("%d",&NumArray[i]);
   }
    str=&NumArray[5-1];
    for(i=0;i<5;i++)
    {
 printf("%d\n",*str--);
    }
    return 0;
}

