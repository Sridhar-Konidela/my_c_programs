#include<stdio.h>
#define size 20
int main()
{
    int n,i,a[size];
    printf("enter no. of elements you want to read\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("array elements:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}