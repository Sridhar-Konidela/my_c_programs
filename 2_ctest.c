#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("enter no. of terms to be printed:\n");
    scanf("%d",&n);
        printf("Fibanocci series:0 1");
        for(i=1;i<=n-2;i++)
        {
            c=a+b;
            printf(" %d",c);
            a=b;
        }    
    return 0;    
}