#include<stdio.h>
#define size 20
int main()
{
    int a[size],n,i;
    printf("how many elements you want to read\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    printf(" %d\t",a[i]);
    return 0;
}