//program to implement recursive function
#include<stdio.h>
int sumofdigits(int );
int main()
{
    int n,s;
    puts("enter a number");
    scanf("%d",&n);
    s=sumofdigits(n);
    printf("sum of digits of %d is %d",n,s);
    return 0;
}
int sumofdigits(int n)
{
    if(n==0)
        return 0;
    else
    {
        return (n%10+sumofdigits(n/10));
    }    
}
