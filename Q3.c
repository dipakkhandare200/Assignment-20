//Write a function to sort an array of int type values.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void sort(int n,int *ptr)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=j+1;j<n;j++)
        {
            if(*(ptr+j)<*(ptr+i))
            {
                t=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}
int main()
{
    int i, n,array1[100];
    printf("how many number you want to enter \n");
    scanf("%d",&n);
    printf("Enter the integer \n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    sort(n,array1);
    return 0;
}
