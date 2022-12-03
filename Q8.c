//Write a program to compute the sum of all elements in an array using pointers.
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
    str=NumArray;
    for(i=0;i<5;i++)
    {
        sum=sum+*str;
        str++;
    }
    printf("The sum of array element= %d",sum);
}
