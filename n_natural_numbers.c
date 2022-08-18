#include<stdio.h>
int main()
{
    int n,i;
    printf("enter how many numbers you want to print\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}