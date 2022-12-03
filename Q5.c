//5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n1,n2,*array1=&n1,*array2=&n2;
    printf("Enter the 1st integer \n");
    scanf("%d",array1);
    printf("Enter the 1st integer \n");
    scanf("%d",array2);
if(*array1>*array2)
{
    printf("Maxm number is %d",n1);
}
else
{
     printf("Maxm number is %d",n2);

}
}
