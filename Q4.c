// Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
    int *pc,c;
    c=22;
    printf("Adress of c =%p\n",&c);
    printf("value of c =%d\n",c);
    pc=&c;
    printf("Adress of pc =%p\n",&pc);
    printf("Value of pc =%d\n",*pc);
    c=11;
    printf("Adress of c =%p\n",&c);
    printf("value of c =%d\n",&c);
}
