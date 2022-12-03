//1. Write a function to swap values of two in variables of calling function.
#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
   int a,b;
   printf("Enter two numbers \n");
   scanf("%d%d",&a,&b);
   swap(&a,&b);
   printf("\na=%d\nb=%d",a,b);
   return 0;
}
void swap(int *p,int*q)
{
int t;
t=*p;
*p=*q;
*q=t;
}
