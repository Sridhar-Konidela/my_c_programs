#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter n value\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of %d numbers is %d",n,sum);
    return 0;
}