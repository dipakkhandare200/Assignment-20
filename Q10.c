//10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    char *s[20];
    int len,i;
    printf("Enter a string\n ");
    gets(s);
    len=strlen(s);
    printf("String in reverse order\n");
    for(i=len;i>=0;i--)
    printf("%c",*(s+i));

}
