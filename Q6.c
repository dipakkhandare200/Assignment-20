//6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
#include<string.h>
int length_str(char*);
void main()
{
    char a1[20];
    int length;
    printf("Enter any string \n");
    fgets(a1,100,stdin);
    length=length_str(a1);
    printf("length of string is =%d",length-1);
}
int length_str(char *m)
{
    int count=0;
    while(*m!='\0')
    {
        count++;
        m++;

    }
    return count;
}
