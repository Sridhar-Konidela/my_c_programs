#include<stdio.h>
int main()
{
    int n,i,range;
    printf("enter a number:\n");
    scanf("%d",&n);
    do
    {
        printf("enter the range:\n");
        scanf("%d",&range);
    }while (range<=0);
    printf("Multiplication table of %d upto %d times:\n",n,range);
    for(i=1;i<=range;i++)
    {
        printf("%d X % d = %d\n",n,i,n*i);
    }
    return 0;
}