//Write a function to swap strings of two char arrays of calling functions
#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char**,char**);
void main()
{
    char *str1[100],*str2[100];

    printf("Enter the two string \n");
    gets(str1);
    gets(str2);
    swap(&str1,&str2);
    printf("str1=%s\nstr2=%s",str1,str2);
    return 0;
}
void swap(char **p,char **q)
{
char *t;
  t=*p;
  *p=*q;
  *q=t;
}
