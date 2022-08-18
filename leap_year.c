#include<stdio.h>
int main()
{
    int y;
    printf("enter a year:\n"); 
    scanf("%d",&y);
    if((y%400==0)||(y%4==0&&y%100!=0))
    {
        printf("%d is a LEAP YEAR",y);
    }
    else
    {
        printf("%d is NOT A LEAP YEAR",y);
    }
    return 0;
} 