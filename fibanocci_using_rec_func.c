#include<stdio.h>
int fib(int);
int main()
{
    int i,n,x; 
    printf("enter n value to print fibanocci series\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=fib(i);
        printf("%d ",x);
    }
    return 0;
}
int fib(int n)
{
    if(n==1) //base condition
        return 0;
    else if(n==2) //bse condition
        return 1;
    else
        return (fib(n-1)+fib(n-2));        
}

